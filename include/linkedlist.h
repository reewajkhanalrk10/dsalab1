#ifndef linkedList_h
#define linkedList_h

class node {
   public:
   int data;
   class node *next;
   node(int d=0, node* n=nullptr):data(d),next(n){}
};

class linkedlist {
    public:
     node* head;
     node* tail;

    linkedlist(node* h=nullptr, node* t=nullptr):head(h),tail(t){}

    bool isEmpty();
    void addTohead(int data);
    void addTotail(int data);
    void add(int data, node *predecessor);

    void removeFromhead();
    void remove(int data);

    node* retrieve(int data);
    bool search(int data);
    void traverse();
};

#endif