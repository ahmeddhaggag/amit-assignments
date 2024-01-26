#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5];
    int maxV = - __INT_MAX__;
    int minV=  INT_MAX ;
    int max = 0;
    int min = 0;
    
    for(int i =0; i<5; i++){
        scanf("%d", arr + i);
        if(maxV < arr[i]){
            maxV = arr[i];
            max = i;

        }
        if(minV > arr[i]){
            minV = arr[i];
            min = i;
        }
    }
    for(int j =0; j<5; j++){
        printf("%d ", arr[j]);
    }
    printf("\nMaximum value is at index %d \n",max );
    printf("Minimum value is at index %d \n", min);
    int temp;
    for(int i =0; i<4; i++){
        for(int j = i+1; j<5; j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        } 
    }
    for(int j =0; j<5; j++){
        printf("%d ", arr[j]);
    }

    return 0;



}