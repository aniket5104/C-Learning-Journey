#include<stdio.h>
#include<conio.h>
void table(int x);
int main(){
    int a;
    printf("enter a no.:");
    scanf("%d",&a);
    table(a);//argument/actual parameter
    return 0;


}
void table(int x){ // parameter/ formal parameter
    for(int i=1;i<=10;i++){
        sleep(1);
        printf("%d\n",x*i);
    }
}