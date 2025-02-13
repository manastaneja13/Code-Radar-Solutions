#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    char x;
    printf("Enter the operator: ");
    scanf("%c",&x);
    printf("Enter 2 no.: ");
    scanf("%d%d",&a ,&b);
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