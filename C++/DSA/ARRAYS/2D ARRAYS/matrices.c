#include<stdio.h>
#include<stdlib.h>

int main(){
    int row,col,i,j,a[50][50],b[50][50],sum[50][50],prod[50][50],sub[50][50],div[50][50];
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
    printf("MATRIX 1: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d  ",a[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
   printf("\nEnter the elements of MATRIX 2: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Element b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("MATRIX 2: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d  ",b[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    //ADD
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        sum[i][j]=a[i][j]+b[i][j];
        }
    }
    //SUB
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        sub[i][j]=a[i][j]-b[i][j];
        }
    }
    //MUL
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        prod[i][j]=a[i][j]*b[i][j];
        }
    }
    //DIV
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        div[i][j]=a[i][j]/b[i][j];
        }
    }
    printf("\n SUM MATRIX : \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",sum[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    printf("\n SUBTRACTION MATRIX : \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",sub[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    printf("\n PRODUCT MATRIX : \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",prod[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    printf("\n DIVISION MATRIX : \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",div[i][j]);
             if (j == col-1) {
        printf("\n\n");
      }
        }
    }
    return 0;
}