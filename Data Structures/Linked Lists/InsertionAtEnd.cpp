#include <QCoreApplication>
#include <QDebug>

struct node
{
    int data;
    node *next;

};


void displayList(node *i)
{

    while(i!=NULL)
    {

        qDebug() << i->data;
        i = i->next;
    }

}

void insertNode(node *i, node *insert)
{

    while(i->next!=NULL)//NB i.next!= NOT i!=
    {
        i=i->next;
    }

    i->next=insert;
    insert->next=NULL;


}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    node *head = new node;
    head->data=1;

    node *second = new node;
    second->data = 2;

    head->next=second;

    node *tail  = new node;
    tail->data = 3;

    second->next=tail;
    tail->next=NULL;

    node *insert = new node;
    insert->data = 4;

    insertNode(head,insert);
    displayList(head);

    return a.exec();
}
