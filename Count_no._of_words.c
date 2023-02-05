#include<stdio.h>
int main()
{
    char a[100],i=0,c=0;
    scanf("%[^
]s",a);
    while(a[i]!=NULL)
    {
        if(a[i]==' ')
        {
            c++;
        }i++;
    }printf("%d",c+1);
}