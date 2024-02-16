#include<stdio.h>
int main(){
    int r,h,volume,surfacearea;
   float  pi=3.14;
    printf("enter the radius and height ");
    scanf("%d%d",&r,&h);
    volume=4/3*pi*r*r*r;
    surfacearea=4*pi*r*r;
    printf("\nvolume of sphere is: %.2d ",volume);
    printf("surface area of sphere is: %.2d",surfacearea);
    return 0;
}