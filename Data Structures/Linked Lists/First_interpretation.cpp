#include <iostream>

using namespace std;

int main()
{


    struct node
    {

        int data;
        node* next;


    };


    node *tail = new node;
    tail->data = 4;
    tail->next=nullptr;

    node *head = new node;
    head->data = 3;
    head->next = tail;


    cout << head->next->data;
    return 0;
}
