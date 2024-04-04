#include <stdio.h>

#define MAX_SIZE 5 


union ArrayUnion {
    int int_array[MAX_SIZE];
    float float_array[MAX_SIZE];
    char char_array[MAX_SIZE];
};

int main() {
    
    union ArrayUnion arr_union;

    
    for (int i = 0; i < MAX_SIZE; i++) {
        arr_union.int_array[i] = i + 1;
    }

    
    printf("Integer array values: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr_union.int_array[i]);
    }
    printf("\n");


    for (int i = 0; i < MAX_SIZE; i++) {
        arr_union.float_array[i] = 1.1 * (i + 1);
    }

    
    printf("Float array values: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%.2f ", arr_union.float_array[i]);
    }
    printf("\n");

    
    for (int i = 0; i < MAX_SIZE; i++) {
        arr_union.char_array[i] = 'A' + i;
    }

    
    printf("Character array values: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%c ", arr_union.char_array[i]);
    }
    printf("\n");

    return 0;
}