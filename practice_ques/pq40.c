#include<stdio.h>
int fn(int x,int y);
int main(){
    int a,b;
    printf("enter a");
    scanf("%d,",&a);
    printf("enter b:");
    scanf("%d",&b);
    fn(a,b);
    return 0;
}
int fn(int x,int y){
    printf("%d\n",x+y);
    printf("%d\n",x*y);
    printf("%d\n",(x+y)/2);
}