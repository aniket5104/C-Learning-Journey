#include<stdio.h>
void main(){
char a[5];
int k=0;
printf("enter the string\n");
gets(a);
for(int i=0;i<=4;i++){   
    if(a[i]>='0'&&a[i]<='9'){
        k+=1;
    }

}
if (k==4){
    printf("digit");
}
else{
    printf("char");
}
}