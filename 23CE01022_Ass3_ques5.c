#include<stdio.h>
int main (){
    int x;
    printf("enter no of days late");
    scanf("%d",&x);
    if(x==0)
    printf("no fine");
   else if(x>0&&x<=5)
    printf("1 rupee fine");
   else if(x>5&&x<=10)
    printf("2 rupee fine");
   else if(x>10)
    printf("ur membership is cancelled");
    return 0;
}