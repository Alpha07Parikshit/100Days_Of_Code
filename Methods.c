#include <stdio.h>

int main() {
    
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    if (num2 !=0) {
        quotient = (float)num1 /num2;
        printf("\nQuotient: %.2f\n",quotient);
    }else {     
        printf("\nDivision not possible (deniominator is 0).\n");
    
    }

    printf("\nSum: %d", sum);
    printf("\nDifference: %d", difference);
    printf("\nProduct; %d", product);

    return 0;
}

