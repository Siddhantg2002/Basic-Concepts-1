#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int firstoccurence(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int lastoccurence(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        end=mid-1;
        else if(arr[mid]<x)
        start=mid+1;
        else{
            if(mid!=n-1||arr[mid]!=arr[mid+1])
            return mid;
            else
            start=mid+1;
        }
    }
    return -1;
    
}
int countoccurence(int arr[],int n,int x){
    int first=firstoccurence(arr,n,x);
    if(first==-1)
    return 0;
    else
    return (lastoccurence(arr,n,x)-first+1);
}
void swap(int* x,int* y){
    int temp= *x;
    *x= *y;
    *y=temp;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j], &arr[j+1]);
        }
    }
}
void printarray(int arr[],int n){
      for(int i=0;i<n;i++){
         printf(" %d",arr[i]);
    }
    printf("\n");
}

int main(){
    int n,i,x;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
   printf("\n");
   printf("ARRAY: \n");
   bubblesort(arr,n);
   printarray(arr,n);
   printf("Enter the Element: \n");
   scanf("%d",&x);
    printf("Position of First occurence of the element is: %d\n",firstoccurence(arr,n,x));
     printf("Position of last occurence of the element is: %d\n",lastoccurence(arr,n,x));
       printf("Count of occurences of the element is: %d\n",countoccurence(arr,n,x));
    return 0;
}