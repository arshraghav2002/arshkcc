#include<stdio.h>
#include<math.h>
int main()
{
    int length,breadth,area,perimeter,radius;
    float pi=3.14,circumference,Area;
           
       scanf("%d%d", &length,&breadth);

              area=(length*breadth );
              perimeter=2*(length+breadth);

         printf("\n area of rectangle is %d",area);
         printf("\n perimeter of rectangle is %d",perimeter);

       scanf("%d",&radius);

              Area=(pi*radius*radius);
              circumference=(2*pi*radius);  

         printf("\n Area of circle is %f",Area);
         printf("\n circumference of  circle is %f",circumference);


            return 0;
}