#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="Jai Shree Ram";
    char arr[100];
    strcpy(arr,str);//copies the string str to arr
    printf("The copied string is %s",arr);
    return 0;   
}