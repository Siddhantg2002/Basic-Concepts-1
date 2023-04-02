#include <iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node*insertatposition(node*head,int x,int pos){
    node*temp=new node(x);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node*curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL)
        return head;
        temp->next=curr->next;
        curr->next=temp;
        return head;
}
 
 void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
 }
 int main(){
    node*head=NULL;
    head=insertatposition(head,10,1);
    head=insertatposition(head,20,2);
    head=insertatposition(head,30,3);
    head=insertatposition(head,40,4);
    head=insertatposition(head,50,6);
    head=insertatposition(head,60,5);
    head=insertatposition(head,70,7);
    head=insertatposition(head,80,8);
    head=insertatposition(head,90,9);
    head=insertatposition(head,100,10);
    printlist(head);
    return 0;
 }