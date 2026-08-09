#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }

};


Node *head=NULL:

void insertend(int value){
    
         Node *newnode=new Node(value);

          if(head == NULL)
    {
        head = newnode;
    }
    else{
        while(temp->next != NULL){

            newnode->next =NULL;
            temp->next=newnode;

        }

    }
}

void display(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}


int main()
{

    Node *head = NULL;
    insertend( 10);
    insertend( 20);
    insertend( 30);

    display(head);

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   