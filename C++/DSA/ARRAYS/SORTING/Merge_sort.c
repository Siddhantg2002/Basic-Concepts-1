#include<stdio.h>
#include<stdlib.h>
void swap(int* x,int* y){
    int temp= *x;
    *x= *y;
    *y=temp;
}
void merge(int a[],int b[],int n,int m){
    int x=m+n;
    int c[x];
    int i,j;
    for(i=0;i<n;i++)
        c[i]=a[i];
    for(i=0;i<m;i++)
        c[n+i]=b[i];
        printf("MERGED ARRAY: \n");
        for(i=0;i<x-1;i++){
        for(j=0;j<x-i-1;j++){
            if(c[j]>c[j+1])
            swap(&c[j], &c[j+1]);
        }
    }
 for(i=0;i<x;i++)
    printf(" %d",c[i]);
}
   

void printarray_1(int a[],int n){
    printf("ARRAY 1: \n");
      for(int i=0;i<n;i++){
         printf(" %d",a[i]);
    }
    printf("\n");
}
void printarray_2(int b[],int m){
    printf("ARRAY 2: \n ");
      for(int j=0;j<m;j++){
         printf(" %d",b[j]);
    }
    printf("\n");
}
int main(){
    int m,n,i,j,x;
    printf("Enter the size of array1: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    printarray_1(a,n);
   printf("\n");
    printf("Enter the size of array2: \n");
    scanf("%d",&m);
    int b[m];
    printf("Enter the elements: \n");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]); 
    }
       printf("\n");
   printarray_2(b,m);
   merge(a,b,n,m);
  return 0;
}