#include <iostream>
#include "fila.h"

using namespace std;

queue::queue(){
    //size = 0;
    first = 0;
    last = 0;
    structure = new TypeIt[max_itens];

}
queue::~queue(){
    delete [] structure;
    cout << "Fila destruída!!!\n";
}

bool queue::isEmpty(){
    return (first == last);
} 
bool queue::isFull(){
    return ((last - first) == max_itens);
}

void queue::enqueue(TypeIt item){
    if (isFull()){
        cout << "A fila está cheia. Elemento não inserido\n";
    } else {
        structure[last % max_itens] = item;
        last++;
        //size++; // Incrementar o tamanho da fila
    }
}
TypeIt queue::dequeue(){
    if (isEmpty()){
        cout << "A fila está vazia. Nenhum elemento removido.\n";
        return 0;
    } else {
        first++;
        return structure[(first - 1) %max_itens];
        // return structure[first % max_itens];
        // first++; // Vai dar ruim!!!
    }
}
void queue::print(){
    if (isEmpty()){
        cout << "A fila está vazia. Nenhum elemento para mostrar.\n";
    } else {
        cout << "Fila: [";
        // for (int i = 0; i < size; i++){ Para quando usar o size++ em queue or dequeue
        //     cout << structure[i] << ", ";
        // }
        // O mais correto e prático, utilizado abaixo:
        for (int i = first; i < last; i++){
            cout << structure[i % max_itens] << ", ";
        }
        cout << "]\n";
    }
}