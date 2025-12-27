#include <iostream>

using namespace std;


struct node
{

    int data;
    node *next;



};


void printList(node *n)
{

    while(n!=nullptr)
    {

        cout << n->data<< endl;
        n=n->next;
    }

}
int main()
{


    node *head = new node;
    node *middle = new node;
    node *tail = new node;

    head->data = 1;
    head->next = middle;

    middle->data = 2;
    middle->next = tail;

    tail->data = 3;
    tail->next=nullptr;

    printList(head);
    return 0;
}
