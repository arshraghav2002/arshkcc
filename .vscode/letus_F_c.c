#include<stdio.h>
#include<conio.h>
       int main ()   
       {
     int num,a,b,c,d,e;

          printf("enter the five digit number");
          scanf("%d",  &num);


              e=num%10;
              d=(num/10)%10;
              c=(num/100)%10;
              b=(num/1000)%10;
              a=num/10000;
          printf("the sum of five digit number is %d", a+b+c+d+e);

       return 0;
         getch ();

       }