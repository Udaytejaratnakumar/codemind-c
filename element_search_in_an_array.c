#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        if(a[i]==n)
        {
            c=1;
            break;
        }
    }if(c==1)
    {
        printf("True");
    }else{
        printf("False");
    }
}