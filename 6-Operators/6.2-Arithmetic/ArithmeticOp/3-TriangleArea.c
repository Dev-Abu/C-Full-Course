#include<stdio.h>

int main(int argc, char const *argv[])
{
    // To creat Triangle area formula we need base and height
    float base, height, area;

    printf("Enter base : ");
    scanf("%f", &base);

    printf("Enter height : ");
    scanf("%f", &height);

    area = (float)1/2 * base * height;
    printf("Area = %.2f\n", area);

    return 0;
}
