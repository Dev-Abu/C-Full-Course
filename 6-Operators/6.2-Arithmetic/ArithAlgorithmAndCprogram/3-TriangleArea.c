
// Algorithm, Flowchart and C Program.

/*Algorithm the area of ​​a triangle

1. Start
2. Take input base and height.
3. determine using 0.5*base*height.
4. Show the result of area.
5. End
*/

// C program the area of ​​a triangle.




#include<stdio.h>

int main(int argc, char const *argv[])
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);
    
    area = 0.5*base*height;
    
    printf("area is : %.2f ", area);




    return 0;
}
