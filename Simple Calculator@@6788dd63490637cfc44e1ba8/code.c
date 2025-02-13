#include <stdio.h>

int main() {
    int a, b;
    char x;

    // Properly handle input with space before %c
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
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
