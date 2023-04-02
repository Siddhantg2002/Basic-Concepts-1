#include <iostream>
using namespace std; 
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
}

int main(){
    node* head=new node(1000);
     node* temp1=new node(120);
      node* temp2=new node(1110);
       node* temp3=new node(2310);
       head->next=temp1;
       temp1->next=temp2;
       temp2->next=temp3;
       temp3->next=NULL;
    printlist(head);
    return 0;
}