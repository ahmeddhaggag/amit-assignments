#include<stdio.h>

typedef struct complex{
    int real;
    int imaginary;
}complex;

int main(){
    complex n1, n2;
    printf("Enter real and imaginary parts for 1st number, respectively: ");
    scanf("%d", &n1.real);
    scanf("%d", &n1.imaginary);
    printf("Enter real and imaginary parts for 2nd number, respectively: ");
    scanf("%d", &n2.real);
    scanf("%d", &n2.imaginary);
    printf("Sum: %d + %di", n1.real + n2.real, n1.imaginary + n2.imaginary);
    


}