#include<stdio.h>
void hello();//prints Hello
void bye();//prints good bye
int main() { 
    hello();
    bye();
    return 0;
}

void hello(){
    printf("Hello\n");
}

void bye(){
    printf("good bye\n");
}
