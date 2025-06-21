#include<stdio.h>
int main(){
    int day;// 1- monday 2- tuesday.....
    printf("Enter the day");
    scanf("%d",&day);

    switch(day){
        case 1 : printf("monday\n");
                 break;
        case 2 : printf("tuesday\n");
                 break;
        case 3 : printf("Wednesday\n");
                 break;
        case 4 : printf("Thursday\n");
                 break;
        case 5 : printf("Friday\n");
                 break;
        case 6 : printf("Saturday\n");
                 break;
        case 7 : printf("SUnday \n");
                break;
        default : printf("Not a valid input");
    }
    return 0;
}