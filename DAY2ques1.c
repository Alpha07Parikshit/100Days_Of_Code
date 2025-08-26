#include <stdio.h>

int main() {
    int lenght, breathe, area, perimetre;

    printf("Enter the lenght of the triangle: ");
    scanf(" %d", &lenght);
    
    printf("Enter the lenght of the breathe: ");
    scanf(" %d", &breathe);

    area = lenght * breathe;
    perimetre = 2 * (lenght + breathe);

    printf("Area of the triangle = %d\n, area");
    printf("Perimetre of the triangle = %d\n , perimetre");

    return 0;
}