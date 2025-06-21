#include<stdio.h>
int sq();
int rec();
float circle();
int main(){
    char n;
    printf("Enter the shape(s, r or c):");
    scanf("%c",&n);
    if(n=='s'){
        sq();
    }
    else if(n=='r'){
        rec();
    }
    else if(n=='c'){
        circle();
    }
    else{
        printf("invalid input");
    }
    return 0;

}
int sq(){
    int s;
    printf("Enter the Side:");
    scanf("%d",&s);
    printf("The area of sq is:%d",s*s);
}
int rec(){
    int l,b;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter te breadth: ");
    scanf("%d",&b);
    printf("The area of rec is: %d ",l*b);
}
float circle(){
    int r;
    printf("enter the radius: ");
    scanf("%d", &r);
    printf("The area of circle is %f",3.14*r*r);
}