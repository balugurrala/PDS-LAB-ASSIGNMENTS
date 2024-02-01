#include<stdio.h>
int main()
{
    int x1,x2,x3;
    int y1,y2,y3;
    printf(" enter (x1,y1)");
    scanf("%d%d",&x1,&y1);
    printf("enter (x2,y2)");
    scanf("%d%d",&x2,&y2);
    printf("enter (x3,y3)");
    scanf("%d%d",&x3,&y3);
    if((x1-x2)/(y1-y2)==(x2-x3)/(y2-y3))
    printf("it lies on straight line");
    else 
    printf("not on staright line");
    return 0;
}