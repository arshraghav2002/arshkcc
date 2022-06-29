#include<stdio.h>
#include<conio.h>
int main()
{
    int ram, shyam, ajay;

    printf("Enter the age of ram shyam and ajay ");
    scanf("%d%d%d", &ram,&shyam,&ajay);

    if (ram<=shyam)
    {
        if(ram<=ajay)
        {
            printf("Ram is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    else if(shyam<=ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}