#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("enter the coefficients ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("\n %d",d);
    if(d>0)
    {
         x1=(-b+sqrt(d))/(2*a);
         x2=(-b-sqrt(d))/(2*a);
        printf("\n roots are:%f%f ",x1, x2);
    }
     else if(d<0){
     printf("\n roots are imaginary");
     }
    return 0;
}
