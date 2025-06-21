#include <stdio.h>
// functions are useful in practical purposes
void printHello(); // function prototype: create a fn

int main()
{
    printHello(); // function call: call a fn in main fn
    printHello(); // you can a call a fn multiple
    printHello();
    return 0;
}

void printHello()
{ // function definition: define what a fn will do
    printf("Hello World\n");
}
