#include <stdio.h>

int main(){
    int matrix[2][2], i, j;
    printf("Enter element: ");
    for(i=1; i<3; i++){
        for(j=1; j<3; j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n The 2x2 matrix is: \n");
    for(i=1; i<3; i++){
        for(j=1; j<3; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}