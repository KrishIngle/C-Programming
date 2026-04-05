// Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.
// If the given matrices are
// 2 3 5 &  1 5 2 The output will be 1 -2 3
// 4 5 6	2 3 4 					 2  2 2
// 6 5 7 	3 3 4 					 3  2 3
// The elements of the output matrix are separated by one blank space.

#include <stdio.h>

int main(){
    int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d",&row);
    scanf("%d",&col);

    printf("Enter the elements of matrix A:\n");
    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            printf("Enter the element at position (%d,%d): ",i,j);
            scanf("%d",&matrix_A[i][j]); 
        }
    }

    printf("Enter the elements of matrix B:\n");
    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            printf("Enter the element at position (%d,%d): ",i,j);
            scanf("%d",&matrix_B[i][j]); 
        }
    }

    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

    printf("The result of matrix A - matrix B is:\n");
    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            printf("%d ",matrix_C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}