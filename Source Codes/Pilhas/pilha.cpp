#include <iostream>
#include "pilha.h"

using namespace std;

stack::stack(){
    size = 0;
    structure = new TypeIt[max_itens];
} // Construtora

stack::~stack(){
    delete [] structure;
} // Destrutora

bool stack::isFull(){
    return (size == max_itens);
} // Se T(1) = cheia, se F(0) = vazia

bool stack::isEmpty(){  
    return (size == 0);
} // Se T(1) = vazia, se F(0) = cheia

void stack::push(TypeIt item){
    if (isFull()){
        cout << "A pilha está cheia. Não é possível inserir esse elemento!!!" << endl;
    } else{
        structure[size] = item;
        size++;
    }
} // Push: inserir itens na pilha

TypeIt stack::pop(){
    if (isEmpty()){
        cout << "A pilha está vazia. Não há elementos para serem removidos!!!" << endl;
        return 0;
    } else {
        // return structure[size - 1];
        // size--; Gerará um erro, pois o return finaliza a função
        size--;
        return structure[size];
    }
} // Pop: remover itens da pilha

void stack::print(){
    cout << "Pilha: [";
    for (int i = 0; i < size; i++){
        cout << structure[i] << ", ";
    }
    cout << "]\n"; 
} // Imprimir a pilha

int stack::lenght(){
    return size;
} // Imprime o tamanho da pilha

TypeIt stack::search(TypeIt srch){
    if (isEmpty()){
        cout << "A pilha está vazia!\n";
        return 0;
    }

    for (int i = 0; i <= size; i++){
        if(structure[i] == srch){
            //cout << "Elemento encontrado: " << srch;
            return structure[i];
        }
    }

    cout << "Elemento não encontrado na pilha" << endl;
    return 0;
}