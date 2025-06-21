#include<stdio.h>
#include<string.h>
int main(){
    union data{
        char name[20];
        float cgpa;
        int roll;
    };
    union data d1;
    strcpy(d1.name,"Aniket");
    printf("%s\n",d1.name);

    d1.cgpa= 9.6;
    printf("%f\n",d1.cgpa);

    d1.roll=240524;
    printf("%d\n",d1.roll);

    printf("%s\n",d1.name);//will be corrupted as roll has been stored in the allocated memory
    return 0;
}