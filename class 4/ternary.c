#include <stdio.h>
/*this ternary ooperator has less practical usage but is
asked in exams and placements*/
int main()
{
    int age;
    printf("enter age");
    scanf("%d", &age);
    age >= 18 ? printf("\nadult") : printf("\n not an adult"); // ':' this serves the else purpose in the ternaty operator
    return 0;
}