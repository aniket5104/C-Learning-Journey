#include<stdio.h>
struct student{
    char name;
    int roll;
};
void updateRoll(struct student *s){
   s->roll=44;
}
int main(){
    struct student s1={'A',24};
    updateRoll(&s1);
    printf("Updated roll no.: %d",s1.roll);
    return 0;
}