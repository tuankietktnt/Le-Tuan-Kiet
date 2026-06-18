#include <stdio.h>
#define SIZE 5 
void reverseArray(int ary[]){
    int i;
    for (i = 0; i < SIZE / 2; i++){
        int temp = ary[i];
        ary[i] = ary[SIZE - 1 - i];
        ary[SIZE - 1 - i] = temp;
    }
    printf("The Reverse Integer Array is: ");
    for (i = 0; i < SIZE; i++){
        printf("%d ", ary[i]);
    }
    printf("\n");
}
int main(){
    int my_array[SIZE];
    int i;
    printf("Enter %d integers for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++){
        printf("Please enter your Element [%d]: ", i);
        scanf("%d", &my_array[i]);
    }
    printf("\nThe Original Array: ");
    for (i = 0; i < SIZE; i++){
        printf("%d ", my_array[i]);
    }
    printf("\n");
    reverseArray(my_array);
}

