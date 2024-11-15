#ifndef DOUBLE_LINKED_H
#define DOUBLE_LINKED_H

#include "dnode.h"

class DLinkedList{

public:
    DLinkedList();
    ~DLinkedList();

    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;

    void addFront(const Elem& e);
    void addBack(const Elem& e);
    void removeFront();
    void removeBack();

private:
    DNode* header;
    DNode* trailer;

protected:
    void add(DNode* v, const Elem& e);//insert new node before v
    void remove(DNode* v);
};

#endif  //DOUBLE_LINKED_H