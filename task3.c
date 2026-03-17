#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;  
    
    printf("a (имя массива): %p\n", (void*)a);
    printf("&a[0]: %p\n", (void*)&a[0]);
    printf("&a[1]: %p\n", (void*)&a[1]);
    printf("ptr: %p\n", (void*)ptr);
    printf("&ptr: %p\n", (void*)&ptr);
    
    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("*ptr = %d\n", *ptr);
    printf("*(ptr + 1) = %d\n", *(ptr + 1));
    
    printf("sizeof(a) = %lu байт\n", sizeof(a));
    printf("sizeof(ptr) = %lu байт\n", sizeof(ptr));
    
    return 0;
}