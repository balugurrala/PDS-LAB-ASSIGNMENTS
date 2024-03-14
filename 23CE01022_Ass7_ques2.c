#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int n = 0;
    printf("Enter the string:");
    gets(a);
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            b[n] = a[i];
            n++;
        }
    }
    b[n]='\0';
    printf("output:%s", b);
    return 0;
}