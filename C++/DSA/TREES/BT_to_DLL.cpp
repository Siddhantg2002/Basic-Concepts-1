#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
struct node{
    int key;
    struct node*left;
    struct node*right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
node*BTtoDSS(node*root){
node*prev=NULL;
    if(root==NULL)
    return root;
    node*head=BTtoDSS(root->left);
    if(prev==NULL)
    head=root;
    else{
        root->left=prev;
        root->right=next;
    }
    prev=root;
    BTtoDSS(root->right);
    return head;
}
void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}
int main(){
    node*root=new node(10);
    root->left=new node(5);
    root->right=new node(50);
    root->right->left=new node(20);
    root->right->right=new node(90);
    node*head=BTtoDSS(root);
    printlist(head);
return 0;
}