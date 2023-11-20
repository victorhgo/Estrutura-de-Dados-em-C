typedef int TypeItem;

// O Node armazenará o valor do node e também o ponteiro para o próximo node
struct node{ 
    TypeItem value; // Armazenará o valor
    node* next; // Armazenará o valor para o próximo node
};

class dynamicStack {
    private:
    
        node* topNode; // O ponteiro que apontará o node que está no topo

    public:

        dynamicStack(); // Constructor
        ~dynamicStack(); // Destructor
        bool isEmpty(); // Check if the stack is empty
        bool isFull(); // Check if full

        void push(TypeItem item);
        TypeItem pop();
        
        void print();

};
