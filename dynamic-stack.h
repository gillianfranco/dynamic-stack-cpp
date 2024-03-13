#include <iostream>
using namespace std;

typedef int TipoItem;

struct Node{
    TipoItem valor;
    Node* proximo;
};

class dynamicStack{
    private:
    Node* NoTopo;

    public:
    dynamicStack();
    ~dynamicStack();
    bool isFull();
    bool isEmpty();
    void push(TipoItem item);
    TipoItem pop();
    void print();
    int size();
};