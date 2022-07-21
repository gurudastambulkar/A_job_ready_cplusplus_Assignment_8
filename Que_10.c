#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=4;i++)
    {
        x=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                if(j<=4)
                {
                    printf("%d",x);
                    if(j<4)
                        x++;
                }
                else
                {
                    x--;
                    printf("%d",x);
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
