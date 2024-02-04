#include<stdio.h>
#include<stdlib.h>
int Fibbonacci(int n);
int* fibbonacciSequence(int n);
static int j = 0;
int main(){
 
int n;
printf("Enter number of elements: \n");
scanf("%d", &n);
Fibbonacci(n + 1);
 
printf("\n");
for(int k =0; k<n; k++){
    printf("%d ",   fibbonacciSequence(n)[k]);
 }
}


int Fibbonacci(int n){
    if(n == 0){
        if(j == 0){
        printf("0 ");
        j++;
        }
        return 0;
        
    } 
    else if(n == 1) {
        if(j == 1){
       printf("1 ");
       j++;
        }
       return 1;
      
    }
    else {
        int fib = Fibbonacci(n-1) + Fibbonacci(n-2);
        if(j == n){
        printf("%d ", fib);
        j++; 
        }
        return fib;
        
    }  
} 
int* fibbonacciSequence(int n){
    int* output = (int*)malloc(n*sizeof(n));
    output[0] = 0;
    output[1] = 1; 
    int i =2; 
    while(i<=n){
        output[i]= output[i-1] + output[i-2];
        i++;
    }
    return output;

}