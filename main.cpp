
#include <iostream>
#include "linkedlist.cpp"
#include "linkedlist.h"
int main()

{
    linkedlist list;

    cout<<"\n\nChecking Emptiness\n";
    list.isEmpty(); 

    cout<<"Adding to tail\n";
    list.addTotail(22);
    list.traverse();

    cout<<"Adding to head\n";
    list.addTohead(11);
    list.traverse();

    cout<<"Adding to tail\n";
    list.addTotail(33);
    list.traverse();

    cout<<"Adding to tail\n";
    list.addTotail(44);
    list.traverse();

    cout<<"Adding after given data\n";
    node* predecessor=list.retrieve(33);
    list.add(55,predecessor);
    list.traverse();

    cout<<"Adding after given data\n";
    node* predecessor2=list.retrieve(55);
    list.add(66,predecessor2);
    list.traverse();
    
    cout<<"Removing from head\n";
    list.removeFromhead();
    list.traverse();
    
    cout<<"Removing the given data\n";
    list.remove(55);
    list.traverse();
    
    cout<<"Searching the given data\n";
    list.search(33);
    list.search(55);
    
    cout<<"Checking Emptiness\n";
    list.isEmpty();
    
    return 0;
    
}
