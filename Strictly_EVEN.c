#include<stdio.h>
int main()
{
    int n,i,c=0,nc=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
            if(i%2==0)
            {
                nc++;
            }
        }
    }if(c==nc)
    {
        printf("True");
    }else{
        printf("False");
    }
}