
// Algorithm, Flowchart and C Program.

/*Algorithm the area of ​​a Circle

1. Start
2. Take input radius.
3. Area = pi*radius*radius.
4. Show the result of area.
5. End
*/

// C program the area of ​​a Circle.




#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float radius, area;

    printf("Enter base: ");
    scanf("%f", &radius);
  
    //area = 3.1416*radius*radius;
    area = M_PI*radius*radius;
    
    printf("area is : %.2f ", area);


    return 0;
}
