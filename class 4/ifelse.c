#include<stdio.h>
int main(){
    int age;
    printf("age is:");
    scanf("%d", &age);
    if( age >= 18){
        printf("\nadult");// this will be executed if the conditions given do meet with the input.
        printf("\nthey can vote");
        printf("\nthey can drive");
    }
    else if( age >13 && age < 18){// else if is used for adding more conditions.
        printf("teenager");/*you can add more conditions using else if as much as you want.
                            if one condition is not met other else if wil be checked at last if 
                            no conditions are met else will be executed. To check more than one condition use 
                            is multiple times.*/
    }
    else{
        printf("not an adult");// this will execute if the input doesnt meets the conditions in the if or else if statement.
    }
    printf("\nthank you");
    return 0 ;
}