//How to Return a Pointer from a Function in C
#include <stdio.h>

int* getStaticValue() {
    static int num = 42;  
    return &num;
}

int main() {
    int *ptr = getStaticValue();
    printf("Value: %d\n", *ptr);
    return 0;
}