#include<stdio.h>
void greet();
int main(){
    greet();
    return 0;
}
void greet(){
    char a;
    printf("Tell your nationality(i-Indian & f- French):");
    scanf("%c",&a);
    if( a== 'i'){
        printf("Namaste");
    }
    else if(a=='f'){
        printf("Bonjour");
    }
    else{
        printf("Invalid input");
    }
}