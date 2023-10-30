// Algorithm, Flowchart and C Program.

/* Algorithm summation of two numbers.

1. Start
2. Take input two numbers.
3. Summation of two numbers.
4. Show the result.
5. End
*/

// C program summation of two numbers.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, sum;
    printf("Entar two numbrs : ");
    scanf("%d %d", &num1,&num2);

    sum = num1+num2;
    printf("The sum is = %d \n", sum);
    return 0;
}
