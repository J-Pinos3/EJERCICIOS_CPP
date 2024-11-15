#ifndef DNODE_H
#define DNODE_H

#include <string>
using std::string;


typedef string Elem;
class DNode{

private: 
    Elem elem;
    DNode* prev;
    DNode *next;

    friend class DlinkedList;
};


#endif //DNODE_H

