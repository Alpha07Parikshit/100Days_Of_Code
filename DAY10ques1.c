#include <stdio.h>
void main()
{
  int a, b, c;

  printf("Enter the three sides of trinagle:");
  scanf("%d %d %d", &a, &b, &c);

  if ((a + b > c) && (b + c > a) && (c + a > b))
  {
    printf("The triangle is Valid .\n");

    if (a == b && b == c)
    {
      printf("The triangle is Equilateral .\n");
    }
    else if (a == b || b == c || c == a)
    {
      printf("The triangle is Isosceles .\n");
    }
    else
    {
      printf("The triangle is scalene .\n");
    }
    if ((a * a + b * b == c * c) ||
        (b * b + c * c == a * a) ||
        (c * c + a * a == b * b))
    {
      printf("The triangle is Right-angled .\n");
    }
  }
  else
  {
    printf("\nThe triangle is not Valid .\n");
  }

  return 0;
}