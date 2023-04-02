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
node*insertion_at_beginning(node*head,int x){
    node*temp=new node(x);
    temp->next=head;
    return temp;
}
node*deletion_at_beginning(node*head){
    if(head==NULL)
        return NULL;
        else{
            node*temp=head->next;
            delete head;
            return temp;
        }
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
    head=insertion_at_beginning(head,30);
    head=insertion_at_beginning(head,40);
    head=insertion_at_beginning(head,50);
    head=insertion_at_beginning(head,10);
    head=insertion_at_beginning(head,20);
    head=insertion_at_beginning(head,90);
   // head=deletion_at_beginning(head);
    //head=deletion_at_beginning(head);

    printlist(head);
    return 0;
}