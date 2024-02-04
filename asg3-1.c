#include<stdio.h>
void swap(int* x, int* y);

int main(){
    int x,y;
   printf("Enter first number:\n");
   scanf("%d", &x);
   printf("Enter second number:\n");
   scanf("%d", &y);
    swap(&x, &y);

}


void swap(int* x, int* y){
    printf("Before swapping: \nx = %d   y = %d\n", *x, *y);
    int c = *x;
    *x = *y;
    *y = c; 
    printf("After swapping:\nx = %d  y = %d ", *x, *y);
}