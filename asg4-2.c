#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void reverse(char* str);
int main(){
    char str[20] ; 
    printf("Enter string: ");
    scanf("%20[^\n]", str);
    reverse(str);


}

void reverse(char* str){
 int j = 0;
 int l = strlen(str);
 char words[10][10];
 char newWords[10][10];
    for(int i =0; i<10; i++){
        words[i][0] = '\0';
        newWords[i][0] = '\0';
    } 
     for(int i = 0; i <l;i++){
        if(isspace(str[i])){
            j++;
        }else{
            strncat(words[j], str + i, 1);
            
        }
    
    }
     for(int h = j; h>-1; h--){
        strcpy(newWords[j-h] , words[h]);
        
    }
    for(int m=0; m<j+1;m++){ 
    // printf("%s\n", words[m]); 
      printf("%s ", newWords[m]); 
     }
// return newWords;
}