#include<stdio.h>
void edit(int* n);

int main(){
    int n;
printf("Enter value: \n");
scanf("%d", &n);
printf("Value before calling edit: %d\n", n);
edit(&n);
printf("Value after calling edit: %d\n", n);



}
void edit(int* n){
    (*n)++;
}