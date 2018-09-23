#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, root1, root2;
    printf(" Please enter a \n");
    scanf("%lf", &a);
    printf(" Please enter b \n");
    scanf("%lf", &b);
    printf(" Please enter c \n");
    scanf("%lf", &c);
    if (b * b - 4. * a * c > 0)
    {
        root1 = (-b + sqrt(b * b - 4. * a * c)) / (2. * a);
        root2 = (-b - sqrt(b * b - 4. * a * c)) / (2. * a);
        printf("\n First  root is %lf ", root1);
        printf("\n Second root is %lf ", root2);
    }
    else
    {
        printf("\n Discriminant is negative!  No roots!");
    }
    printf("\n ");
    return 0;
}