#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

struct Deck;

struct Card
{
    Rank rank;
    Suit suit;

    Card();
    Card(Suit s, Rank r);
    bool equals(const Card& c2) const;
    string to_string() const;
    bool is_greater(const Card& c2) const;
    int find(const Deck& deck) const;
};

struct Deck {
    vector<Card> cards;
    Deck();
    Deck(int n);
    void print() const;
    void shuffle();
    void swap_cards(int c1, int c2);
    Card remove_card();
    void add_card(const Card& c);
};
