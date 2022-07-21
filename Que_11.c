#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=5;i++)
    {
        x='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j<=5)
                {
                    printf("%c",x);
                    if(j<5)
                        x++;
                }
                else
                {
                    x--;
                    printf("%c",x);
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
