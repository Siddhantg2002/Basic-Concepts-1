#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
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
void printFreq(int arr[], int n){
	int freq = 1, i = 1;
	while(i < n){
		while(i < n && arr[i] == arr[i - 1]){
			freq++;
			i++;
		}
		cout<<arr[i - 1] << " " << freq << endl;
		i++;
		freq = 1;
	}
	if(n==1 || arr[n-1]!=arr[n-2])
	    cout<<arr[n-1] + " " + 1;
}
int main() {
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
   printFreq(arr, n);
    return 0;
}