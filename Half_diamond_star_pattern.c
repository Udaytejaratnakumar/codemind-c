#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3&&n<=100)
    {
        for(i=1;i<=n*2-1;i++)
        {
            if(i<=n)
            {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }printf("
");
            }else
            {
                for(j=1;j<=2*n-i;j++)
                {
                    printf("*");
                }printf("
");
            }
        }
    }else{
        printf("The pattern is not possible");
    }
}