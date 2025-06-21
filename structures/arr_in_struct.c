#include<stdio.h>
int main(){
    struct student{
        int rollno;
        int sub_marks[4];
        char name[];
    };
    struct student stu[3];
    for(int i=0;i<3;i++){
        printf("Enter Data for student %d\n",i+1);
        printf("Enter name");
        scanf(" %s",&stu[i].name);
        printf("Enter Roll no.");
        scanf(" %d",&stu[i].rollno);
        for(int j=0;j<4;j++){
            printf("Enter the marks in subject %d",j+1);
            scanf(" %d",&stu[i].sub_marks[j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("The data of student %d is:\n",i);
        printf("Name= %s\n",stu[i].name);
        printf("Roll no.: %d",stu[i].rollno);
        for(int j=0;j<4;j++){
            printf("The marks in subject %d is: %d \n",j+1,stu[i].sub_marks[j]);
        }
    }
    return 0;
} 













