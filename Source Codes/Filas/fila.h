#include <iostream>

typedef int TypeIt;

const int max_itens = 100;

class queue{
    private:
    
    int size;
    int first, last;
    TypeIt* structure; 
    TypeIt srch; // Para buscas

    public:
    queue(); // Constructor
    ~queue(); // Destructor

    bool isEmpty(); // A fila está vazia
    bool isFull(); // A fila está cheia

    void enqueue(TypeIt item); // Add Item
    TypeIt dequeue(); // Remove items
    void print(); // Print queue
};
