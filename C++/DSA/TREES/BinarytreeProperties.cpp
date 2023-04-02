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

void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

//Height of tree ()
int height(node*root){
    if(root==0)
    return 0;
    else
    return (1+max(height(root->left),height(root->right)));
}

//maximum node of tree
int maxnode(node*root){
    if(root==0)
    return 0;
    else
    return max(root->key,max(maxnode(root->left),maxnode(root->right)));
}

//Total Number of nodes
int countNode(node *root){
    if(root==NULL)return 0;
    else
        return 1+countNode(root->left)+countNode(root->right);
}  

//Children sum property (Root node is the sum of its children nodes)
bool isSum(node*root){
    if(root==NULL)
    return true;
    if(root->left==NULL&&root->right==NULL)
    return true;
    int sum=0;
    if(root->left!=NULL)
    sum+=root->left->key;
    if(root->right!=NULL)
    sum+=root->right->key;
    return(root->key==sum && isSum(root->left) && isSum(root->right));
}

//Balance Binary Tree (Height of left subtree and right subtree should not be more than 1)
bool isbalance(node*root){
    if(root==NULL)
    return true;
    int lh= height(root->left);
    int rh= height(root->right);
    return(abs(lh-rh)<=1 && isbalance(root->left)&&isbalance(root->right));
}

//Diameter of tree
int diameter(node *root){
    if(root==NULL)return 0;
    int d1=1+height(root->left)+height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);
    return max(d1,max(d2,d3));
}

int main(){
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    inorder(root);
    cout<<endl<<"HEIGHT:"<<height(root)<<endl;
    cout<<"MAX:"<<maxnode(root)<<endl;
    cout<<"SUM:"<<isSum(root)<<endl;
    cout<<"BALANCE OR NOT:"<<isbalance(root)<<endl;
    cout<<"DIAMETER:"<<diameter(root)<<endl;
    cout<<"TOTAL NUMBER OF NODES:"<<countNode(root)<<endl;
return 0;
}