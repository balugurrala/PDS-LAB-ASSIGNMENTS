#include <stdio.h>


struct StructData {
    int integer1;
    int integer2;
    char character;
};


union UnionData {
    int integer1;
    int integer2;
    char character;
};

int main() {
    
    printf("Size of struct StructData: %lu bytes\n", sizeof(struct StructData));
    printf("Size of union UnionData: %lu bytes\n", sizeof(union UnionData));

    return 0;
}