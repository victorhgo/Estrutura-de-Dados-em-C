#include <iostream>

// Para facilitar na hora de trocar o tipo das variáveis (ex int para float)
typedef int TypeIt;

const int max_itens = 100;

class stack{
    private:
    int size;
    TypeIt* structure; // Para criar um vetor
    TypeIt srch; // Para procurar itens

    public:
    stack(); // Construtora
    ~stack(); // Destrutora
    bool isFull(); // Se T(1) = cheia, se F(0) = vazia
    bool isEmpty(); // Se T(1) = vazia, se F(0) = cheia

    void push(TypeIt item); // Push: inserir itens na pilha
    TypeIt pop(); // Pop: remover itens da pilha

    void print(); // Imprimir a pilha
    int lenght(); // Imprime o tamanho da pilha
    TypeIt search(TypeIt srch); // Procura um elemento na pilha
};