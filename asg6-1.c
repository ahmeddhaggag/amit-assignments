#include<stdio.h>
#include<stdlib.h>
struct Student{
    char* name;
    int age;
    int degree;
    int section;

};

int main(){
    struct Student s[2];

    for(int i =0; i<2; i++){
        printf("Enter data of student %d \n", i+1);
        printf("Name: ");
        s[i].name = malloc(10);
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &(s[i].age));
        printf("Degree: ");
        scanf("%d", &(s[i].degree));
        printf("Section: ");
        scanf("%d", &(s[i].section));
    }
    for(int i =0; i<2; i++){
        printf("Student %d\n", i+1);
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Degree: %d\n", s[i].degree);
        printf("Section: %d\n",s[i].section);
        free(s[i].name);
    }
}