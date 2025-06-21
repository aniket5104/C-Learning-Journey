#include<stdio.h>
int main(){
    //char name[]={'J','A','I',' ','S','H','R','E','E',' ','R','A','M','\0'};//\0 is mandatory to terminate the string
    char name[]="JAI SHREE RAM";//\0 is automatically added at the end of the string
    //\0 removes the stress of counting the number of characters in the string
    // the size of name array is not 13 but 14 as \0 is also counted
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
    return 0;
}