#include<stdio.h>


int main(){

    int a,b,result;
    char op;
    printf("Enter operator\n");
    scanf("%c", &op);
    printf("Enter number 1\n");
    scanf("%d", &a);
    printf("Enter number 2\n");
    scanf("%d", &b);
    if(op == '+'){
        printf("%d", a+b);
    }else if(op =='-'){
        printf("%d", a-b);
    }else if(op == '*'){
        printf("%d", a*b);
    }else if(op == '/'){
        printf("%d", a/b);
    }else {
    printf("False operator");
    }



}