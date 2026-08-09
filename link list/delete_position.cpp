#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *head = NULL;

void insert_AT_ending(int value)
{
    Node *newnode = new Node(value);

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

void delete_AT_pos(int pos)
{
    Node *ptr = head;

    pos--;

    while(pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }

    Node *temp = ptr->next;

    ptr->next = temp->next;

    delete temp;
}

void display()
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main()
{
    insert_AT_ending(10);
    insert_AT_ending(20);
    insert_AT_ending(30);
    insert_AT_ending(40);
    insert_AT_ending(50);

    display();
    cout << endl;

    delete_AT_pos(3);
    delete_AT_pos(2);

    display();

    return 0;
}