#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b;
    int fre=0;
    printf("Enter a string:");
    gets(a);
    int l=strlen(a);
    printf("Enter a character:");
    scanf(" %c",&b);
    for(int i=0;i<l;i++)
    {
        if(a[i]==b)
        {
            fre++;
        }
    }
    printf("Frequency of %c is:%d",b,fre);
    return 0;
}