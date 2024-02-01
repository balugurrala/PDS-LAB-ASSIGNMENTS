#include<stdio.h>
int main()
{
    float a;
    printf("/n enter number");
    scanf("%f",&a);
    if(a>0){
        printf("/n number is positive");
    }
    else if(a==0){
        printf("/n number is zero");
    }
    else {
        printf("/n number is negative");
    }
    return 0;
    }
    
