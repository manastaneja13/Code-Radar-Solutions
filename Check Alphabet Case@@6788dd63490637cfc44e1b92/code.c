#include<stdio.h>
int main(){
    char name;
    if(name>='a'&&name<='z'){
        printf("Lowercase");
    }
    else if(name>='A'&&name<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}