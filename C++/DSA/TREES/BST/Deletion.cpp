#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
struct node{
    int key;
    struct node*right;
    struct node*left;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
node*getsuccessor(node*curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}
node*delnode(node*root,int x){
    if(root==NULL)
    return root;
    if(root->key>x)
    root->left=delnode(root->left,x);
    else if(root->key<x)
    root->right=delnode(root->right,x);
    else{
        if(root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        else{
            node*succ=getsuccessor(root);
            root->key=succ->key;
            root->right=delnode(root->right,succ->key);
        }
    }
    return root;
 }
 void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
 }
int main(){
	node *root=new node(10);
	root->left=new node(5);
	root->right=new node(15);
	root->right->left=new node(12);
	root->right->right=new node(18);
	root=delnode(root,15);
	inorder(root);
return 0;
}