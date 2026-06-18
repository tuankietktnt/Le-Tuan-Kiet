#include <stdio.h>
int main(){
    int n;
    float sum = 0.0;
    int i;
    printf("Enter an integer number n: ");
    scanf("%d", &n);
    if (n < 1){
        printf("Error: Invalid value! n must be greater than or equal to 1.\n");
    }
    for (i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    printf("The Sum S(%d) is: %.4f\n", n, sum);
}

