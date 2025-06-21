#include<stdio.h>
int main(){
    int marks;
    printf("marks obtained : ");
    scanf("%d", &marks);
    if(marks<30){
        printf("Your grade is: C");
    }
    else if(marks>= 30 && marks < 70){
        printf(" Your grade is: B ");
    }
    else if(marks>=70 && marks<90){
        printf("Your grade is: A");
    }
    else if(marks>=90 && marks<=100){
        printf("Your grade is: A+");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}