#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=4;i++)
    {
        x='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                {
                    printf("%c",x);
                    if(j<4)
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
