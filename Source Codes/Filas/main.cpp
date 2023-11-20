#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    queue Queue1;
    TypeIt item;
    int option;

    cout << "Trabalhando com filas em C++\n";

    do {
        // Opções do programa
        cout << "Digite 0 para encerrar\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a fila!\n";
        cout << "Digite 4 para verificar se a fila está cheia\n";
        cout << "Digite 5 para destruir a fila\n";
        cout << "Digite 6 para consultar o tamanho da fila\n";
        cout << "Digite 7 para pesquisar um item na fila\n";

        cin >> option;
        switch(option){
            case 1:
                cout << "Elemento a ser inserido: ";
                cin >> item;
                Queue1.enqueue(item);
                break;
            case 2:
                item = Queue1.dequeue();
                cout << "Elemento removido: " << item << endl;
                break;
            case 3:
                Queue1.print();
                break;
            case 4:
                if(Queue1.isFull()){
                    cout << "A fila está cheia.\n";
                } else{
                    cout << "A fila não está cheia.\n";
                }
                break;
            case 5:
                Queue1.~queue();
                break;
            // case 6:
            //     cout << "A fila contém " << Queue1.lenght() << " itens\n";
            //     break;
            // case 7:
            //     cout << "Qual elemento você gostaria de procurar: ";
            //     cin >> srch;
            //     TypeIt* found = new TypeIt;
            //     *found = Queue1.search(srch);
            //     if (*found != 0){
            //         cout << "O elemento " << *found << " foi encontrado na fila\n";
            //         delete found;
            //     } else {
            //         break;
            //     }
        }    

    } while (option != 0);
}
