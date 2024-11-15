#ifndef STRING_NODE_H
#define STRING_NODE_H


#include <string>
using std::string;

class StringNode{

private:
    string elem;
    StringNode* next; //next item in the list

    friend class StringLinkedList;

};

#endif //STRING_NODE_H