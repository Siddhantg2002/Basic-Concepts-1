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
node*insert(node*root,int y){
    if(root==NULL)
    return new node(y);
    if(root->key<y)
    root->right=insert(root->right,y);
    else
        root->left=insert(root->left,y);
    return root;
}
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);;
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main(){
node*root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
	  root=insert(root,50);
    inorder(root);
return 0;
}