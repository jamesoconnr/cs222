#include "Cards.h"

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

string Card::to_string() const
{
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",  "Ace"};

    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool equals(const Card& c1, const Card& c2)
{
    return (c1.rank == c2.rank && c1.suit == c2.suit);
}

bool Card::is_greater(const Card& c2) const
{
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;
    return false;
}

int main(){
    Card myCard(1, 2);
    Card myCard2(3, 4);
    cout << myCard.to_string() << endl;
    if (myCard.is_greater(myCard2)) {
        cout << myCard.to_string() << " is greater than " << myCard2.to_string();
        cout << endl;
    } else {
        cout << "Not equal" << endl;
    }  
    if (equals(myCard, myCard2)) {
        cout << "Yup, that's the same card." << endl;
    } else {
        cout << "Not the same cards" << endl;
    }

    return 1;
}