#include<stdio.h>
#include<string.h>
int top=-1;
int s[100];

void push ( char x)
{
    if(top == 99) 
    {
        printf("Stack is full");
    }
    else {
        
    s[++top]=x;}

}
void pop()
{
    printf("%c",s[top--]);

}
int main()
{
    char str[100];

        printf("Input a string:");
    fgets(str,100,stdin);
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++)
    push(str[i]);
    for(i=0;i<len;i++)
    pop();
}