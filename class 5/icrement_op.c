#include <stdio.h>
int main()
{
    // increment operator- i++ & ++i
    //  ++i : increase then check
    int i = 1;
    printf("%d\n", i++); // i++ - check then increase
    printf("%d\n", i);   // i=2 now
    printf("%d\n", ++i); //++i - increase then check so i=3 now
    printf("%d\n", i);   // still i= 3
    return 0;
}