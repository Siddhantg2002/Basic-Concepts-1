#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void printarray(int arr[],int n){
      for(int i=0;i<n;i++){
         printf(" %d",arr[i]);
    }
    printf("\n");
}
void swap(int *x, int *y){
        int temp= *x;
        *x=*y;
        *y=temp;
}

int linearsearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int binarysearch(int arr[],int n, int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        end=mid-1;
        else
        start=mid+1;
    }
    return -1;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
/*int getlargest(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
        return i;
    }
    return -1;
}*/
void reverse(int arr[], int n){
    int start=0; 
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
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
   printarray(arr,n);
    printf("\nEnter the element you want to find: \n");
   scanf("%d",&x);
   printf("POSITION OF ELEMENT IS: %d\n",linearsearch(arr,n,x));
   printf("REVERSED ARRAY: \n");
   reverse(arr,n);
   printarray(arr,n);
   printf("SORTED ARRAY: \n");
   bubblesort(arr,n);
   printarray(arr,n);
      printf("\nEnter the element you want to find: \n");
   scanf("%d",&x);
   printf("POSITION OF ELEMENT IS: %d\n",binarysearch(arr,n,x));
    return 0;
}