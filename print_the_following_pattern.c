#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int c=64+n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c ",c);
        }
        printf("
");
        c--;
    }
}