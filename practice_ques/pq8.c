#include<stdio.h>

int main() {
//part a.>
int isSunday , isSnowing;
isSunday = 1;isSnowing = 0;
printf("%d", isSunday && isSnowing);
//part b.>
int isMonday = 0;int isRaining = 1;
printf("\n%d", isMonday&isRaining);
return 0;
}