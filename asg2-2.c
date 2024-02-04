#include<stdio.h>


int main(){
    int n, m, sum = 0; 
    printf("Enter number: ");
    scanf("%d", &n);
    m = n;
    while(m>0){
        sum += ((m%10)*(m%10)*(m%10));
        m= m/10;

    }
    if(n == sum){
        printf("Armstrong number");
    } else{
        printf("Not an armstrong number ");
    }


}