#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col,i,j,a[50][50],b[50][50],temp[50][50];
   printf("Enter the number of rows (between 1 and 50): ");
  scanf("%d", &row);
  printf("Enter the number of columns (between 1 and 50): ");
  scanf("%d", &col);
    printf("\nEnter the elements of MATRIX 1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("MATRIX: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d  ",a[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
   for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            temp[i][j]=a[j][i];
        }
   }
   for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            a[i][j]=temp[j][i];
        }
    }
    
    printf("\nTRANSPOSE MATRIX: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d  ",a[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    return 0;
}
