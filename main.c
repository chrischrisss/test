#include <stdio.h>

int main() {
    
    int x = 1;
    int y = 2;
    int z[10];

    int *ip;
    ip = &x; //The pointer changes
    y = *ip;
    printf("%p\n", (void *)ip);
    *ip = 0; //The value pointed to changes
    ip = &z[0];

    printf("%p\n", (void *)&x);
    printf("%d\n", (int)x);
    printf("%p\n", (void *)ip);

    

    return 0;
}
