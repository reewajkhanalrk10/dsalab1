#include <iostream>
#include "../include/linkedlist.h"
using namespace std;

bool linkedlist ::isEmpty()
{
    node *temp = head; // Creating Temp node pointing to head for Traversal
    if (temp == NULL)
    {
        cout << "True: List is Empty \n";
        return true;
    }
    else
    {
        cout << "False: List is not Empty \n\n";
        return false;
    }
}

void linkedlist ::addTohead(int data)
{
    node *Newnode = new node;
    Newnode->data = data;
    Newnode->next = head;
    head = Newnode;
}

void linkedlist ::addTotail(int data)
{
    node *Newnode = new node;
    Newnode->data = data;
    Newnode->next = NULL; // Newnode pointing to tail
    node *temp = head;    // Creating a temporary node and assigning it to head
    // For Empty Linked List
    if (head == NULL)
    {
        head = Newnode;
    }
    // For Non Empty Linked List
    else
    {
        while (temp->next != NULL)
        {                      // Traversal to end of linked list
            temp = temp->next; // assigning next node in linked list to temp
        }
        temp->next = Newnode; // Assigning Newnode to next of Last node in the List
    }
}

void linkedlist ::add(int data, node *predecessor)
{
    node *Newnode = new node;
    Newnode->data = data;
    node *temp = head; // Creating a temporary node and assigning it to head
    if (temp == NULL)
    {
        cout << "Error Previous node can't be NULL \n";
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp == predecessor)
            {
                Newnode->next = predecessor->next;
                predecessor->next = Newnode;
                return;
            }
            temp = temp->next;
        }
    }
}

void linkedlist ::removeFromhead()
{
    node *temp = head; // Creating a temporary node and assigning it to head
    head = head->next; // head pointing to second node
    delete temp;       // Deleting first node
}

void linkedlist ::remove(int data)
{
    int check = data;
    node *Previousnode;
    if (head == NULL && head->data == check)
    {
        Previousnode = head;
        head = head->next;
        delete Previousnode;
    }

    node *temp = head; // Creating a temporary node and assigning it to head
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            if (temp->next->data == check)
            {
                Previousnode = temp->next;
                temp->next = temp->next->next;
                delete Previousnode;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    else
    {
        cout << "Error! Warning :You can't delete from EMPTY List \n";
    }
}

node *linkedlist ::retrieve (int data)
{
    int extract = data;
    node *temp = head;
    node *summon;
    int count = 1;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == extract)
            {
                summon = temp;
                return summon;
            }
            temp = temp->next;
            count++;
        }
        cout << extract << " not found in the list \n";
    }
    return nullptr;
}

bool linkedlist ::search(int data)
{
    int check = data;
    node *temp = head;
    int count = 0;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == check)
            {
                count++;
            }
            temp = temp->next;
        }
    }
    if (count == 0)
    {
        cout << check << " not found in the list"
             << " returning False. \n\n";
        return false;
    }
    else
    {
        cout << check << " found in the list"
             << " returning True.\n\n";
        return true;
    }
}

void linkedlist ::traverse()
{
    node *temp = head; // Creating Temp node pointing to head for Traversal
    if (temp != NULL)
    {
        cout << "Your Linked List contains: ";
        while (temp != NULL)
        {                              // Itteration till end of linked list(Reaching NULL)
            cout << temp->data << " "; // Displaying node Data
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
    else
    {
        cout << "Warning THe LIST is EMPTY \n";
    }
}
