#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],c=0,v=0,d=0,w=0;
    scanf("%[^
]s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
        {
            v++;
        }else if(a[i]>=48&&a[i]<=57)
        {
            d++;
        }else if(a[i]==' ')
        {
            w++;
        }else{
            c++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,w);
}