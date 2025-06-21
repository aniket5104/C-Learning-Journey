#include<stdio.h>
int main(){
    char s[]="Get organised! Learn C!!";

    /*printf("%s",&s[n]); ---- prints the string starting 
    fro the (n+1)th character of the mentioned string */

    printf("%s\n",&s[2]);
    printf("%s\n",s);//get organised! learn C!!
    printf("%s\n",&s);
    printf("%c\n",s[2]);//t
    return 0;
}