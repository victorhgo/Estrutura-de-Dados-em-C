#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    stack Stack1;
    TypeIt item;
    TypeIt srch;
    int option;

    cout << "Trabalhando com pilhas em C++" << endl;

    do {
        cout << "Digite 0 para encerrar\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cout << "Digite 4 para verificar se a pilha está cheia\n";
        cout << "Digite 5 para destruir a pilha\n";
        cout << "Digite 6 para consultar o tamanho da pilha\n";
        cout << "Digite 7 para pesquisar um item na pilha\n";
        cin >> option;

        switch(option){
            case 1:
                cout << "Elemento a ser inserido: ";
                cin >> item;
                Stack1.push(item);
                break;
            case 2:
                item = Stack1.pop();
                cout << "Elemento removido: " << item << endl;
                break;
            case 3:
                Stack1.print();
                break;
            case 4:
                if(Stack1.isFull()){
                    cout << "A pilha está cheia.\n";
                } else{
                    cout << "A pilha não está cheia.\n";
                }
                break;
            case 5:
                Stack1.~stack();
                break;
            case 6:
                cout << "A pilha contém " << Stack1.lenght() << " itens\n";
                break;
            case 7:
                cout << "Qual elemento você gostaria de procurar: ";
                cin >> srch;
                TypeIt* found = new TypeIt;
                *found = Stack1.search(srch);
                if (*found != 0){
                    cout << "O elemento " << *found << " foi encontrado na pilha\n";
                    delete found;
                } else {
                    break;
                }
        }    

    } while (option != 0);

    return 0;
}