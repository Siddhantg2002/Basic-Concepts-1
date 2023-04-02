// BST output is sorted array
// left nodes<root
// rigt nodes>root
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
        right=left=NULL;
    }
};
bool search(node*root,int x){
    if(root==NULL)
    return false;
    if(root->key==x)
    return true;
    else if(root->key<x){
        return(search(root->right,x));
    }
    else
        return(search(root->left,x));
}

int main(){
	node*root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
	int x=16;
    if(search(root,x))
    cout<<"FOUND"<<endl;
    else
    cout<<"NOT FOUND"<<endl;
return 0;
}