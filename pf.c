
int strcmp_copy(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] = '\0') {
            return 0;
        }
    }
    return s[i] - t[i]; // This does  the ASCII numbers
}

int strcmp_ptr(char *s, char *t) {

}

int main() {

    //Section 5.6 Character Pointers and Functions

    return 0;
};
