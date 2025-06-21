#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int first=0,second=1,next;
    for(int i=0;i<=n;i++){
        printf("%d",first);
        next=first+second;
        second=first;
        first=next;
        printf(" ");
    }
    return 0;
}