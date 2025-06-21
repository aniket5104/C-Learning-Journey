#include<stdio.h>
int main(){
    char name[23];
    printf("Enter the name : ");
    //scanf("%s",name);//dont use & as name is already an address
    //scanf("%s",name);//this will take only the first word as input
     scanf("%[^\n]s",name);//this will take the input until enter is pressed
    printf("The name is %s",name);// no need to use any loops or pointers
    return 0;
}