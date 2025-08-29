#include <stdio.h>
#define PI 3.1415

int main() {
    float radius, circumference, area;
    printf("Enter the radius of Circle:");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of the circle = %.2f\n", area);
    printf("The circumference of the circle = %.2f\n", circumference);

    return 0;
}