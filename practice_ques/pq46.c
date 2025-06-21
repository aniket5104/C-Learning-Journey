#include<stdio.h>
void table(int arr[][10],int n, int m,int x);
int main(){
    int a,b;
    int t[2][10];
    int c,d;
    printf("enter a no.:");
    scanf("%d",&c);
    printf("enter a no.");
    scanf("%d",&d);
    table(t,0,10,c);
    table(t,1,10,d);
    return 0;
}
void table(int arr[][10],int n, int m,int x){
    for(int i=0;i<m;i++){
            arr[n][m]=x*(i+1);
            printf("%d\n",arr[n][m]);
    }
}