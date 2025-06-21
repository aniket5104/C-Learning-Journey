#include<stdio.h>
struct student{
    char name;
    int roll;
};
void display(struct student s){
    printf("Name: %c\n",s.name);
    printf("Roll no.: %d",s.roll);
}
int main(){
    struct student s1 = {'A', 101};
    display(s1); // passing structure variable
    return 0;
}