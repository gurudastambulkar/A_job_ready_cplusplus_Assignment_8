#include<stdio.h>
#include<conio.h>
int main()
{
    int a='M',b='y',c='S',d='i',e='r',f='G',i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i<=3)
            {
                if((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
                    printf("*");
                else
                    printf(" ");
            }
            else if(i==4)
            {
                if(j>=i-3 && j<=15+i)
                {
                    if(j==7)
                        printf("%c",a);
                    else if(j==8)
                        printf("%c",b);
                    else if(j==9)
                        printf("%c",c);
                    else if(j==10)
                        printf("%c",d);
                    else if(j==11)
                        printf("%c",e);
                    else if(j==12)
                        printf("%c",f);
                    else
                        printf("*");
                }
            }
            else
            {
                if(j>=i-3 && j<=23-i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
