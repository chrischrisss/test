#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines (char *lineptr[], int nlines);
void writelines (char *lineptr[], int nlines);

void qsort (char *lineprtr[], int left, int right);

int main() {
    
    int nlines;

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        writeline(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000
int getline_cpy(char *, int);
char *p;
char line[MAXLEN];
char *alloc(int);

int readlines(char *lineptr[], int maxlines) {
    int len;
    int nlines;

    nlines = 0;
    while ((len = getline_cpy(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || (p = alloc(len)) == NULL) {
            return -1;
        } else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines) {
    while(nlines-- > 0) {
        printf("%s\n", *lineptr++);
    }
}

void qsort(char *v[], int left, int right) {
    int i;
    int last;
    void swap(char *v[], int i, int j);

    if (left >= right) {
        return;
    } else {
        swap(v, left, (left + right) / 2);
        last = left;
        for (i = left + 1; i <= right; i++) {
            if (strcmp(v[i], v[left]) < 0) {
                swap(v, ++last, i);
            }
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

getline_cpy(char s[], int lim) {
    int c, i;
    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    if (c == '\n'){
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
} 

