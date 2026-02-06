#include <stdio.h>

int main(){
    int a[10];
    int b[10];
    int i;
    printf("Enter array elements: \n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter array elements: \n");
    for(i=0; i<10; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<10; i++){
        printf("Addition of arrays is %d \n", a[i]+b[i]);
    }
    return 0;
}