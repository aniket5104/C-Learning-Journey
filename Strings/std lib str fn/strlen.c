#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Jai Shree Ram";
    char arr[100]="Radhe Radhe";
    int n1=strlen(arr);//gives the length of the array(arr)
    int n2=strlen(str);//gives the length of the string(str)
    //strlen doesn't count the null character(\0) in the string length
    printf("the length of Array is %d\n",n1);
    printf("The length of the string is %d",n2);
    return 0;   
}