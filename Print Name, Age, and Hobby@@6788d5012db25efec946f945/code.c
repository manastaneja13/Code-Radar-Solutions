#include <stdio.h>
int main(){
    char a[100];
    int b;
    char c[100];
    scanf("%s%d\n",&a ,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}