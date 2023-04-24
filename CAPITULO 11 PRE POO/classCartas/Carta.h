#ifndef CARTA_H
#define CARTA_H
#include <string>


class Carta{

public:
    enum class Face{Ace, Deuce, Three, Four, Five, Six, Seven, Eight,Nine, Ten, Jack, Queen, King};
    enum class Suit {Hearts, Diamonds, Clubs, Spades};

    Carta(Face cardFace, Suit cardSuit);
    std::string toString() const;



    Face getFace() const;
    Suit getSuit() const;
private:

    Face face;
    Suit suit;

    static const std::string faceNames[13];
    static const std::string suitNames[4];
};

#endif //CARTA_H