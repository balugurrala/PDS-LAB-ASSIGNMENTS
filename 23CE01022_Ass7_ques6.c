#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("Enter the string:");
    gets(a);
    printf("Enter the substring:");
    gets(b);
    int l=strlen(a);
    int m=strlen(b);
    int d=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i+j]==b[j])
            {
                d=1;
            }
            else
            {
                d=0;
                break;
            }
        }
        if(d==1)
        {
            break;
        }
    }
    if(d==1)
    {
        printf("The substring exists in the string");
    }
    else
    {
        printf("The substring doesnot exist in the string");
    }
    return 0;
}