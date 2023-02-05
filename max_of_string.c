#include<stdio.h>
int main()
{
    char a[100],i=0,max=0;
    scanf("%[^
]s",a);
    while(a[i]!=NULL)
    {
        if(a[i]>max)
        {
            max=a[i];
        }i++;
    }printf("%c",max);
}