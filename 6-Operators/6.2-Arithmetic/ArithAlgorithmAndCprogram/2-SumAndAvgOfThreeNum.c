
// summation and avarege of three numbers. 

// Algorithm, Flowchart and C Program. 

/* Algorithm summation and avarege of three numbers.

1. Start
2. Take input three numbers.
3. Summation of three numbers.
4. avarege by 3 the result from summation.
4. Show the result summation and avarege.
5. End
*/

// C program summation and avarege of three numbers.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, sum;
    float avg;
    printf("Entar three numbers : ");
    scanf("%d %d %d", &num1,&num2, &num3);

    sum = num1+num2+num3;
    printf("The sum is = %d \n", sum);

    avg = (float)sum/3;
    printf("The avg is = %f \n", avg);
    return 0;
}