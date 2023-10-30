#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1=10;
    int num2=5;

    //int temp;

    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("Swap numbers: %d %d \n", num1, num2);
    return 0;
}
