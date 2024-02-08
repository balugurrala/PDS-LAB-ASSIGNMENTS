#include<stdio.h>
int main() {
    float num1,num2;
    char operator;
    printf("Enter num1 : ");
    scanf("%f", &num1);
    printf("Enter operator  : ");
    scanf(" %c", &operator);
    printf("Enter num2 : ");
    scanf("%f", &num2);
    
    
    
    switch(operator){
        case '+' : printf("%f + %f = %f", num1,num2,num1+num2);
          break;
          case '-' : printf("%f - %f = %f", num1,num2,num1-num2);
          break;
          case '*' : printf("%f * %f = %f",num1,num2,num1*num2);
          break;
          case '/' : if(num2!=0){
            float k=num1/num2;
            printf("%f / %f = %f",num1,num2,k);
          }
          else{
            printf("Thhe division is impossible");
          }
          break;
          
          
                   
        
    }
    return 0;
}