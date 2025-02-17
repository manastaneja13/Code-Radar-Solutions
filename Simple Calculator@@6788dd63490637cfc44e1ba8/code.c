#include <stdio.h>

int main() {
    int a, b;
    char x;
    scanf("%d %d %c", &a, &b, &x);

    if (x == '+') {
        printf("%d\n", a + b);
    } 
    else if (x == '-') {
        printf("%d\n", a - b);
    } 
    else if (x == '*') {
        printf("%d\n", a * b);
    } 
    else if (x == '/') {
        if (b == 0) {
            printf("error");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
