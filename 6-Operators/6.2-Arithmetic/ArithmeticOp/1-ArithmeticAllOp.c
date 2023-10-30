#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, result;
    
    printf("Enter two numers: ");
    scanf("%d %d", &num1, &num2);

    result = num1+num2;
    printf("The sum is: %d\n", result);

    result = num1-num2;
    printf("The sub is: %d\n", result);

    result = num1*num2;
    printf("The mui is: %d\n", result);

    result = num1/num2;
    printf("The div is: %d\n", result);

    result = num1%num2;
    printf("The reminder is: %d\n", result);
    

    return 0;
}
