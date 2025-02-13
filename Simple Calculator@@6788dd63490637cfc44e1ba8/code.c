#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    char x;
    scanf("%d%d%c",&a ,&b,&c);
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
    else if (x=='%'){
        printf("Enter Total marks: ");
        scanf("%d",h);
        g=((a+b)/h)*100;
        printf("%d",g);
    }
    return 0;
}