#include<stdio.h>
#define TOGGLE_BIT(var, bit) var ^=(1<<bit)


int main(){
    int n, b;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to toggle: ");
    scanf("%d", &b);

    printf("Number before toggling %d bit: %d\n", b, n);
    TOGGLE_BIT(n,b);
    printf("Number after toggling %d bit: %d", b, n);



}