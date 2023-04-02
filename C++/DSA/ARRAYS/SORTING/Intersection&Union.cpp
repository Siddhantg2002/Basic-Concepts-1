#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    
    for(int i=0;i<m;i++){
        if(i>0 && a[i-1]==a[i])
            continue;
        for(int j=0;j<n;j++)
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
    }    
}
void Union(int a[], int b[], int m, int n){
    
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for(int i=0;i<n;i++)
        c[i+m]=b[i];
    sort(c,c+m+n);
    
    for(int i=0;i<m+n;i++){
        if(i==0||c[i]!=c[i-1])
            cout<<c[i]<<" ";
    }
}

int main() {
	
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	intersection(a,b,m,n);
    cout<<endl;
	Union(a,b,m,n);
}