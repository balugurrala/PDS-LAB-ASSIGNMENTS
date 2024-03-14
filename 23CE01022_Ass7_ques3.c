#include<stdio.h>
#include<string.h>
void rec(int i,int l,char a[100],char b[100]);
int main()
{
    char a[100],b[100];
    printf("Enter the string:");
    gets(a);
    int l=strlen(a);
    b[l]='\0';
    rec(l,l,a,b);
    printf("%s",b);
    return 0;
}
void rec(int i,int l,char a[100],char b[100])
{
    if(i==1)
    {
        b[l-i]=a[i-1];
    }
    else
    {
       b[l-i]=a[i-1];
       rec(i-1,l,a,b);
    }
}