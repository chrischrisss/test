//section 5.4

#include <stdio.h>

#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
    
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return 0;
    }
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}

int strlen_copy(char *s) {
    char *p = s;

    while (p != '\0') {
        p++;
    }
    return p -s;
}

int main() {

    return 0;
}
