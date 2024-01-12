 #include<stdio.h>
 int main()
 {
    int a;
    float b;
    char c;
    printf("enter a,b,c");
    scanf("%d,%f,%c",&a,&b,&c);
    printf("\na=%d address=%u",a,&a);
    printf("\nb=%f address=%u",b,&b);
    printf("\nc=%c address=%u",c,&c);
    return 0;
 }