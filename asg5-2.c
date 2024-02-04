#include<stdio.h>


int main(){

    int arr[5];
    for(int i = 0; i<5; i++){
        scanf("%d", arr + i);
        
    }
    printf("Original array: ");
    for(int i =0; i<5; i++){
        printf("%d ", arr[i]);
    }

    int temp;
    for(int j =0; j<5/2 +1; j++){
        temp = arr[j];
        arr[j] = arr[4-j];
        arr[4-j] = temp;
        
    }
    printf("\nReveresed array: ");
    for(int i =0; i<5; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}