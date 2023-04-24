#include <string>
#include "Carta.h"
using namespace std;

const string Carta::faceNames[13] = {"Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};


const string Carta::suitNames[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};


Carta::Carta(Face cardFace, Suit cardSuit){
    this->face = cardFace;
    this->suit = cardSuit;    
}

std::string Carta::toString() const{
    return faceNames[static_cast<int>(face)] + " of " + suitNames[static_cast<int>(suit)];
}