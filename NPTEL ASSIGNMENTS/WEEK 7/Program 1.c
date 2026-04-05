// Write a C program to find the sum of all elements of each row of a matrix.
// Example: For a matrix
// 4 5 6
// 6 7 3
// 1 2 3
// The output will be
// 15
// 16
// 6

#include <stdio.h>

int main() {
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
    int sum;
    for(i=0;i< row;i++){
        sum=0;      
        for(j=0;j< col;j++){
            sum += matrix[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}