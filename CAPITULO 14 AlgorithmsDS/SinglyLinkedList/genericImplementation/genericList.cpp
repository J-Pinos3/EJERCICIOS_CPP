#include <iostream>
using std::cout;

template <typename A>
class SLinkedList;

template <typename A>
class SNode{
private:
    A elem;
    SNode<A> * next;

    template<typename> friend class SLinkedList;
};

template <typename A>
class SLinkedList{

public:
    SLinkedList();
    ~SLinkedList();

    bool empty() const;
    const A& front() const;
    void addFront( const A& elem);
    void removeFront();

    void printList();

private:
    SNode<A>* head;
};

template <typename A>
SLinkedList<A>::SLinkedList(): head(nullptr){ }

template <typename A>
SLinkedList<A>::~SLinkedList(){
    while( !empty() ){
        removeFront();
    }
}

template <typename A>
bool SLinkedList<A>::empty() const {
    return head == nullptr;
}

template <typename A>
const A& SLinkedList<A>::front() const{ 
    return head->elem;
}

template <typename A>
void SLinkedList<A>::addFront(const A& elem){
    SNode<A>* v = new SNode<A>;
    v->elem = elem;
    v->next = head;

    head = v;
}

template <typename A>
void SLinkedList<A>::removeFront(){
    SNode<A>* old = head;
    head = old->next;

    delete old;
}

template <typename A>
void SLinkedList<A>::printList(){
    SNode<A>* current = head;
    while(current != nullptr){
        cout << current->elem << " -> ";
        current = current->next;
    }
    cout << "null\n";
}

int main()
{
    
    SLinkedList<int> list;
    list.addFront(500);
    list.addFront(400);
    list.addFront(300);
    list.addFront(200);
    list.addFront(100);
    //list.addFront("s");ERROR, LIST WAS DECLARED AS LIST OF INTS
    list.printList();
    return 0;
}
