#include<stdio.h>
int main ()
{   int a,b,c;
    printf("enter threee positive integers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b+c&&b<a+c&&c<a+b)
    printf("it forms triangle");
    else
    printf("not triangle");
    return 0;
}