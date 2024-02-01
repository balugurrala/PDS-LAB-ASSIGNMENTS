#include<stdio.h>
int main ()
{
    int m,n;
    float w,k,t;
    printf("enter marks obtained m");
    scanf("%d",&m);
     printf("no of classes conducted");
    scanf("%f",&k);
    printf("no of classes attended n is ");
    scanf("%d",&n);
    w=n/k;
    t=m*w;
    printf("final score t is %f\n",t);
    if(t>=90)
    printf("grade=ex");
    else if(t>=80&&t<89)
    printf("grade =A");
    else if(t>=70&&t<79)
    printf("grade=B");
   else  if(t>=60&&t<69)
    printf("grade=C");
   else if(t>=50&&t<59)
    printf("grade=D");
   else if(t>=40&&t<49)
    printf("grade=P");
   else if(t<40)
    printf("grade=F");
    return 0;
    }