#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
struct mystack{
    node *head;
    int size;
    mystack(){
    head=NULL;
        size=0;
    }
    void push(int x){
        node*temp=new node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop(){
        if(head==NULL)
            cout<<"STACK IS EMPTY"<<endl;
        int res=head->data;
        node*temp=head;
        head=head->next;
        delete(temp);
        size--;
        return res;
    }
    int sz(){
        return size;
    }
};
int main(){
    mystack s;
    s.push(5);
    s.push(250);
    s.push(400);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}
