#include<stdio.h>



int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The number is even %d\n", !(n%2));
    printf("The number is odd %d",(n%2) );



}