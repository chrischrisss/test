#include <stdio.h>

int strlen_copy(char *s) {
   int count = 0;
   for (count = 0; *s != '\0'; s++) {
    count++;
   }
   return count;
}

int main() {
    
    int x = 1;
    int y = 2;
    int z[5] = {10, 20, 30, 40, 50};



    int *ip;
    ip = &x; //The pointer changes
    y = *ip;
    // printf("%p\n", (void *)ip);
    *ip = 0; //The value pointed to changes
    
    /*
    These two are the same
    */
    ip = &z[0]; 
    ip = z;

    ip = &z[1];
    // printf("%p\n", (void *)ip);
   
    //gets the same resutls
    int result1 = z[1];
    int restult2 = * (z + 1); //you are derefrencing the 2nd element in the array
    // printf("%d\n", result1);
    // printf("%d\n",restult2);

    /*

    Adding a & to both sides:
    & (z[1])
    & (* (z + 1))
    Therfore, the first one give the address to the 2nd element
    The seconds one simplifies to z + 1, which also gives the address of the 2nd element

    */

    ip = &z[1];
    printf("%p\n", (void *)ip);
    ip = z + 1;
    printf("%p\n", (void *)ip);


    // printf("%p\n", (void *)&x);
    // printf("%d\n", (int)x);
    // printf("%p\n", (void *)ip);

    char str[] = "was";
    
    char *ptr = str;
    printf("%d\n", strlen_copy(str));

    return 0;
}
