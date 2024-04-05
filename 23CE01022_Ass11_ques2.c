#include <stdio.h>
#include <string.h>

void removeDuplicates(char s[]) {
    int n = strlen(s);
    int top = -1; 
    char stack[n]; 
    
    for (int i = 0; i < n; i++) {
        if (top >= 0 && s[i] == stack[top]) {
            top--; 
        } else {
            stack[++top] = s[i]; 
        }
    }
    
    
    for (int i = 0; i <= top; i++) {
        s[i] = stack[i];
    }
    s[top + 1] = '\0'; 
}

int main() {
    char s1[] = "abbaca";
    char s2[] = "azxxzy";

    removeDuplicates(s1);
    removeDuplicates(s2);

    printf("Output for abbaca: %s\n", s1);
    printf("Output for azxxzy: %s\n", s2);

    return 0;
}
