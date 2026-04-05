// Write a C program to print lower triangle of a square matrix.
// For example the output of a given matrix
// 2 3 4 will be 2 0 0
// 5 6 7 		 5 6 0
// 4 5 6 		 4 5 6

#include <stdio.h>
int main(){
    int matrix[20][20];
    int i,j,row,col;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d",&row);
    scanf("%d",&col);

    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            printf("Enter the element at position (%d,%d): ",i,j);
            scanf("%d",&matrix[i][j]); 
        }
    }

    printf("The lower triangle of the matrix is:\n");
    for(i=0;i< row;i++){
        for(j=0;j< col;j++){
            if(i>=j){
                printf("%d ",matrix[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}