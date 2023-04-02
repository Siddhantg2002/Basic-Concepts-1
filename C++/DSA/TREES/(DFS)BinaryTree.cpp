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
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(node*root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    cout<<"INODER: ";
    inorder(root);
    cout<<"\n";
    cout<<"PREODER: ";
    preorder(root);
    cout<<"\n";
    cout<<"POSTODER: ";
    postorder(root);
    cout<<"\n";
return 0;
}