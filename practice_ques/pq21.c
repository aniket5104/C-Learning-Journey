#include<stdio.h>
int main(){
    int n;
    printf("give a no. :");
    scanf("%d",&n);
    int f=1;
    for(int i=n;i>=1;i--){
        f=f*i;
    }
    printf("%d", f);
    return 0;
}