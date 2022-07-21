#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=9,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=10-i)
            {
                if(i==1)
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
        a++;
        b--;
    }
    return 0;
}
