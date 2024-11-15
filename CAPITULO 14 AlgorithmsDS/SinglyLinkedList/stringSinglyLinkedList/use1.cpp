#include <iostream>

#include "stringlinkedlist.h"
using namespace std;

int main()
{
    StringLinkedList list;
    list.addFront("Anthax");
    list.addFront("Megadeth");
    list.addFront("Metallica");
    list.addFront("Slayer");
    list.addFront("Blind Guardian");

    list.printList();

    return 0;
}
