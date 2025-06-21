#include<stdio.h>
#include<string.h>
int xstrlen(char *str);//self-made strlen function
int main(){
    char str1[100]="Jai Shree Ram";
    char arr[100]="Radhe Radhe";
    printf("The lenth of the string is  %d\n",xstrlen(str1));
    printf("The length of array is %d",xstrlen(arr));
    return 0;
}
int xstrlen(char *str){
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;
}