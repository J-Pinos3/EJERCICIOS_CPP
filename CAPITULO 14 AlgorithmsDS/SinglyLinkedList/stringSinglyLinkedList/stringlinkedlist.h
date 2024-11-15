#ifndef STRING_LINKED_LIST_H
#define STRING_LINKED_LIST_H

#include "stringnode.h"

#include <string>
using std::string;

class StringLinkedList{

public:
    StringLinkedList();
    ~StringLinkedList();

    bool empty() const;
    const string& front() const;
    void addFront(const string& e);
    void removeFront();

    void printList();

private:
    StringNode* head; //pointer to the head of the list
};

#endif //STRING_LINKED_LIST_H