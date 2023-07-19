// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* merge(char* x, char* y) {
    int n = strlen(x) + strlen(y) + 1;
    int i = 0;
    int j = 0;
    char* c = (char*)malloc(n * sizeof(char));
    for (; i < strlen(x); i++) {
        c[i] = x[i];
    }
    c[i] = ' '; 
    i++;
    for (; i < n; i++) {
        c[i] = y[j];
        j++;
    }
    c[i] = '\0';
    return c;
}
int main() {
    char* name = "Ivaylo";
    char* name1 = "Georgiev";
    char* name3 = merge(name, name1);
    printf("%s", name3);
    return 0;
}