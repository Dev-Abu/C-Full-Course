

// Algorithm, Flowchart and C Program.

/*Algorithm the area of ​​a Rectriangle

1. Start
2. Take input length and width.
3. Area = length*width.
4. Show the result of area.
5. End
*/

// C program the area of ​​a Rectriangle.




#include<stdio.h>

int main(int argc, char const *argv[])
{
    float length,width, area;

    printf("Enter length : ");
    scanf("%f", &length);

    printf("Enter width : ");
    scanf("%f", &width);
    
    area = length*width;
    
    printf("area of Rectriangle : %.2f\n", area);

    return 0;
}


