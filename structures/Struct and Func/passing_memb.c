#include<stdio.h>
struct student{
    char name;
    int roll;
};
void show_roll(int r){
    printf("%d",r);
}
int main(){
    struct student s1;
    s1.roll=240524;
    show_roll(s1.roll);
    return 0;
}