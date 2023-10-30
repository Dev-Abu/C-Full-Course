
// Algorithm, Flowchart and C Program.

/*Algorithm the centigrade to Fahrenheit

1. Start
2. Take input centigrade temperature.
3. F = (c*1.8)+32 using this formula determine to Fahrenheit.
4. Show the result of Fahrenheit temperature.
5. End
*/

// C program the area of ​​a triangle.




#include<stdio.h>

int main(int argc, char const *argv[])
{
    float cent, F;

    printf("Enter temperature temp : ");
    scanf("%f", &cent);
    
    F = (cent*1.8)+32;
    
    printf("area is : %.2f \n", F);

    return 0;
}
