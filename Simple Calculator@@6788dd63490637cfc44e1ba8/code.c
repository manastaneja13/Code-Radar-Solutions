#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    char x;
    scanf("%d %d %c",&a ,&b, &x);
    if (x == '+'){
        c = a+b;
        printf("%d",c);
    }
    else if (x == '-'){
        d = a-b;
        printf("%d",d);
    }
    else if (x == '*'){
        e = a*b;
        printf("%d",e);
    }
    else if (x == '/'){
        f = a/b;
        printf("%d",f);
    }
    return 0;
}