#include <iostream>
using namespace std;

class solution{

    public:
    listnode* reverseselist(listnode* head);

    listnode* prev = NULL;
    listnode* curr = head;
    listnode* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr -> next = prev;

        prev=curr;
        curr=next;

        
        return prev;

    }

};







int main() {
    
    return 0;
}
