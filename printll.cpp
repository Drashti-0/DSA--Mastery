#include <iostream>
using namespace std;

struct Node{
     int data;
    Node* next;

};

int main() {
   
    Node* a =new Node{10,NULL};
    Node* b =new Node{20,NULL};
    Node* c =new Node{30,NULL};

    a->next=b;
    b->next=c;

   Node* temp = a;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}


