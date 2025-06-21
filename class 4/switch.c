#include <stdio.h>
int main()
{
    int day;
    printf("Give a no.(1-7):");
    scanf("%d", &day);
    switch (day)
    { // cases can be in any order.
    case 1:
        printf("monday");
        break; // if any of the case is matched break prevents other cases from execution.
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("not a valid day"); // default case will run if niether of the cases is satisfied.
    }
    return 0;
}