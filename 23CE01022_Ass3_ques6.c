#include<stdio.h>
#include<math.h>
int main ()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int num2=num*num;
    int n=0;
    int m=num;
    while(m>0)
    {
        m=m/10;
        n++;
    }
    int den=pow(10.0,n);
    int part1=num2/den;
    int part2=(num2%den);
    printf("%d\n%d\n%d\n%d",n,den,part1,part2);
    if(num!=(part1+part2))
    printf("not keprekar number");
    else 
    printf("keprekar number");
    return 0;
}