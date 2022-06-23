#include<stdio.h>
    int main ()
     {
        float fahrenheit, celsius;
        printf("\n Enter temprature in farenheit");
        scanf("%F",& fahrenheit);
         
        celsius=(fahrenheit-32)*5/9;
        printf("\ncelcius = %.3f",celsius);

       return 0;
       

     }