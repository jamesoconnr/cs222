#include "Cards.h"
#include <cstdlib> 
#include <ctime>
#include <vector>

Card::Card() {
    suit = NONE; rank = JOKER;
}

Card::Card(Suit s, Rank r) {
    suit = s; rank = r;
}

bool Card::equals(const Card& c2) const
{
    return (rank == c2.rank && suit == c2.suit);
}

string Card::to_string() const {
    string cardString;
    
    switch (rank) {
        case JOKER:
            cardString += "JOKER";
            break;
        case TWO: case THREE: case FOUR: case FIVE: case SIX: case SEVEN: case EIGHT: case NINE: case TEN:
            cardString += std::to_string(rank);
            break;
        case JACK:
            cardString += "JACK";
            break;
        case QUEEN:
            cardString += "QUEEN";
            break;
        case KING:
            cardString += "KING";
            break;
        case ACE:
            cardString += "ACE";
            break;
        default:
            cardString += "Unknown Rank";
            break;
    }

    cardString += " of ";

    switch (suit) {
        case CLUBS:
            cardString += "Clubs";
            break;
        case DIAMONDS:
            cardString += "Diamonds";
            break;
        case HEARTS:
            cardString += "Hearts";
            break;
        case SPADES:
            cardString += "Spades";
            break;
        default:
            cardString += "Unknown Suit";
            break;
    }

    return cardString;
}


bool Card::is_greater(const Card& c2) const
{
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;
    return false;
}

void print_deck(const vector<Card>& deck)
{
    for (int i = 0; i < deck.size(); i++) {
        cout << deck[i].to_string() << endl;
    }
}

Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

void Deck::print() const
{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_string() << endl;
    }
}

int Card::find(const Deck& deck) const
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i].equals(*this)) return i;
    }
    return -1;
}

int random_between(int l, int h) {
    srand(static_cast<unsigned int>(time(0)));
    return l + rand() % (h - l + 1);
}

void Deck::swap_cards(int c1, int c2) {
    Card temp = cards[c1];
    cards[c1] = cards[c2];
    cards[c2] = temp;
}

void Deck::shuffle()
{
    for (int i = 0; i < cards.size(); i++) {
        int rand_card = random_between(0, cards.size() - 1);
        swap_cards(i, rand_card);
    }
}

Deck subdeck(Deck d, int l, int h)
{
    Deck sub(h-l+1);

    for (int i = 0; i < sub.cards.size(); i++) {
        sub.cards[i] = d.cards[l+i];
    }
    return sub;
}

void Deck::add_card(const Card& c)
{
    cards.push_back(c);
}

Card Deck::remove_card()
{
    Card card = cards[cards.size()-1];
    cards.pop_back();
    return card;
}


int main(){
    Card myCard(CLUBS, TWO);
    Card myCard2(DIAMONDS, THREE);
    cout << myCard.to_string() << endl;
    if (myCard.is_greater(myCard2)) {
        cout << myCard.to_string() << " is greater than " << myCard2.to_string();
        cout << endl;
    } else {
        cout << "Not equal" << endl;
    }  
    if (myCard.equals(myCard2)) {
        cout << "Yup, that's the same card." << endl;
    } else {
        cout << "Not the same cards" << endl;
    }
    return 1;
}