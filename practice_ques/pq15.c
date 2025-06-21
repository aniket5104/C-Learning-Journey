#include<stdio.h>
int main(){
    int n;
    printf("give a no.:");
    scanf("%d",&n);
    int sum=0;
for(int i=1;i<=n;i++){
    sum =sum + i;
}
printf("%d",sum);
for(int j=n;j>=1;j--){
    printf("\n%d",j);
}
    return 0;
}