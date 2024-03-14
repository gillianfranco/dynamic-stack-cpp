#include <iostream>
#include "dynamic-stack.h"
#include <cstddef>
using namespace std;

dynamicStack::dynamicStack(){
    TopNode = NULL; // Faz com que a instância privada receba valor nulo
}

dynamicStack::~dynamicStack(){}

bool dynamicStack::isFull(){
    Node* NewNode; // Aponta para uma local onde será armazenado uma instância da estrutura Node
    try{ // Tenta armazenar um elemento
        NewNode = new Node; // Faz com que o local que NewNode está apontando se torne uma instância da classe Node
        delete NewNode;
        return false;
    }catch(bad_alloc exception){ // Se o motivo por não ter sucesso na tentativa foi por um mau alocamento, ou seja, por não ter espaço na memória do computador, então será executado o código entre chaves
        return true;
    }
}

bool dynamicStack::isEmpty(){
    return (TopNode == NULL); // Se nó que está no topo da pilha for nulo, quer dizer que a lista está vazia
}

void dynamicStack::push(TipoItem item){}
TipoItem dynamicStack::pop(){}
void dynamicStack::print(){}
int dynamicStack::size(){}