#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("Enter the string:");
    gets(a);
    int l=strlen(a);
    int d=1;
    for(int i=0;i<=l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            d=0;
            break;
        }
    }
    if(d==1)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }
    return 0;
}