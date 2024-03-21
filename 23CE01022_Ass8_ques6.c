#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char *str1, const char *str2) {
    
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    

    char *concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    
    
    if (concatenated == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    
    strcpy(concatenated, str1);
    
    
    strcat(concatenated, str2);
    
    return concatenated;
}

int main() {
    char *str1, *str2;
    
    
    printf("Enter the first string: ");
    scanf("%ms", &str1); 
    
    
    printf("Enter the second string: ");
    scanf("%ms", &str2); 
    
    char *result = concatenateStrings(str1, str2);
    
    printf("Concatenated string: %s\n", result);
    
    
    free(str1);
    free(str2);
    free(result);
    
    return 0;
}