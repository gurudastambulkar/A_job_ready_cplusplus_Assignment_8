#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=7;i++)
    {
        x='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                if(j<=7)
                {
                    printf("%c",x);
                    if(j<7)
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
