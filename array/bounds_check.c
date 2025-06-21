#include<stdio.h>
int main(){
    int arr[4],i;
    for(i=0;i<=10;i++){//no error will be given
        printf("Enter the %dth elemnt of array",i);
        scanf("%d",&arr[i]);
    }
    return 0;
}