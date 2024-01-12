#include <stdio.h>
#include<math.h>
int main()
  {
    double a;
    short int b;
    printf("Enter double variable a");
    scanf("%lf", &a);
    printf("Enter short integer b ");
    scanf("%hd", &b);
    double remainder = fmod(a,b);
    printf("Remainder: %lf\n", remainder);
    return 0;
}