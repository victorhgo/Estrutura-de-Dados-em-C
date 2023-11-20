#include <iostream>
#include "dynamic_stack.h"
#include <cstddef> // to use the NULL function

using namespace std;

// Constructor
dynamicStack::dynamicStack(){

    topNode = NULL; // Quando é criada a pilha, um topnode é criado como nulo, pois não há elementos

}

// Destructor
dynamicStack::~dynamicStack(){

    node* tempNode;

    // Fazer isso até que o topNode seja NULL, ou seja, vazio
    while(topNode != NULL){

        // Criamos um node temporário para receber o topNode
        tempNode = topNode;

        // Agora o topNode receberá o endereço do próximo node
        topNode = topNode->next;

        // Podemos deletar o tempNode, removendo topNode anterior
        delete tempNode;
    }

}

// Check if empty
bool dynamicStack::isEmpty(){

    return(topNode == NULL); // Se o topNode está vazio, retorna 1

}

// Check if full - in this case the computer's memory will be checked
bool dynamicStack::isFull(){

    node* newNode;

    try {
        // Cria um novo node e o deleta. Se funcionar: tem espaço na memória para alocação
        newNode = new node;
        delete newNode;
        
        return false; // Memória não está cheia

    // Se não funcionar, receberá um bad_alloc: memória cheia
    } catch(bad_alloc exception) {
        return true;
    }

}

// To push items into the stack
void dynamicStack::push(TypeItem item){

    if(isFull()){
        cout << "Não foi possível inserir o elemento, a pilha está cheia!\n";
    } else {
        // Criamos um novo ponteiro como newNode:
        node* newNode = new node;

        // O valor desse nó será o item inserido:
        newNode->value = item;

        // O próximo será o topo antigo:
        newNode->next = topNode;

        // O novo topo será o newNode:
        topNode = newNode;
    }

}

// To pop out items from the stack
TypeItem dynamicStack::pop(){
    if(isEmpty()){
        cout << "A pilha está vazia!\n";
        return 0;
    } else {
        // Criar um node temporário...
        node* tempNode;

        // Que receberá o topNode
        tempNode = topNode;

        TypeItem item = topNode->value;

        // topNode terá que apontar o próximo node
        topNode = topNode->next;

        // Deletar o tempNode
        delete tempNode;

        // Retornar o item removido
        return item;
    }
}

// To print the Stack
void dynamicStack::print(){

    node* tempNode = topNode;

    cout << "Pilha [";
    while(tempNode != NULL){
        cout << tempNode->value << ", ";
        tempNode = tempNode->next; // o tempNode receberá o valor do próximo node
    }

    cout << "]\n";

}