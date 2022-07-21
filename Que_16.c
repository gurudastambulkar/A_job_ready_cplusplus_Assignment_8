#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a=5,b=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(i==5)
                    printf("*");
                else if(j==a || j==b)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
        a--;
        b++;
    }
    return 0;
}
