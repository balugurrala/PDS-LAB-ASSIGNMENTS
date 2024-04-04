#include <stdio.h>


union Data {
    int integer;
    float floating_point;
    char character;
};

int main() {
    union Data data; 

    
    data.integer = 10;
    printf("Integer value: %d\n", data.integer);

    data.floating_point = 3.14;
    printf("Float value: %f\n", data.floating_point);

    data.character = 'A';
    printf("Character value: %c\n", data.character);

    
    data.integer = 20;
    printf("Integer value after reassigning: %d\n", data.integer);

    data.floating_point = 4.5;
    printf("Float value after reassigning: %f\n", data.floating_point);

    data.character = 'B';
    printf("Character value after reassigning: %c\n", data.character);

    return 0;
}