// To accept list of N integers and partition list into two lists, one having even numbers and other having odd numbers.

#include <stdio.h>
int main(){
    int n, i, even[100], odd[100], even_count = 0, odd_count = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the integers: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            even[even_count++] = arr[i];
        }
        else {
            odd[odd_count++] = arr[i];
        }
    }
    printf("Even numbers: ");
    for(i = 0; i < even_count; i++){
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers: ");
    for(i = 0; i < odd_count; i++){
        printf("%d ", odd[i]);
    }
    return 0;
}