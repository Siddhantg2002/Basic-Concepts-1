#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(int* x,int* y){
    int temp= *x;
    *x= *y;
    *y=temp;
}
void selectionsort(int arr[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min_index])
            min_index=j;
            if(min_index!=i)
            swap(&arr[min_index], &arr[i]);
        
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
   selectionsort(arr,n);
   printarray(arr,n);
  return 0;
}