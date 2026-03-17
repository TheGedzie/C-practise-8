#include <stdio.h>

int main() {    
    printf("Размер char: %lu байт\n", sizeof(char));
    printf("Размер short: %lu байт\n", sizeof(short));
    printf("Размер int: %lu байт\n", sizeof(int));
    printf("Размер long: %lu байт\n", sizeof(long));
    printf("Размер long long: %lu байт\n", sizeof(long long));
    printf("Размер float: %lu байт\n", sizeof(float));
    printf("Размер double: %lu байт\n", sizeof(double));
    printf("Размер указателя: %lu байт\n", sizeof(void*));
    
    return 0;
}