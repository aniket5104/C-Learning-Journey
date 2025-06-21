#include<stdio.h>
int main(){
    struct student{
        char name;
        int roll;
        struct dob{
            int day;
            int month;
            int year;
        }birthday;
    };
    struct student s1,s2;
    //s1.birthday.date --> day of birth of s1.
    //s2.birthday.month -->day of birth of s2.
/* or this can also be achieved by the following 
struct dob{
    int day;
    int month;
    int year;
};
struct student {
    char name;
    int roll;
    struct dob birthday;
}s1,s2;*/
/*nesting can also be done in this way
struct teacher t1={"Sam",34,900,{8,12,1970},{1,7,1995}};
*/
    return 0;
}