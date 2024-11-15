#include <iostream>
using std::cout;

#include "stringlinkedlist.h"

StringLinkedList::StringLinkedList(): head(nullptr){ }

StringLinkedList::~StringLinkedList(){
    while( !empty() ){
        removeFront();
    }
}

bool StringLinkedList::empty() const{
    return head == nullptr;
}

const string& StringLinkedList::front() const{
    //return (*head).elem;
    return head->elem;
}

void StringLinkedList::addFront(const string& e){
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head; //head now follows v

    head = v;   //v is the head
}

void StringLinkedList::removeFront(){
    StringNode* old = head;
    head = old->next;

    delete old;
}

void StringLinkedList::printList(){
    StringNode* current = head;
    while( current != nullptr ){
        cout << current->elem << " -> ";
        current = current->next;
    }
    cout <<"null\n";
}