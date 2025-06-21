#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int i=4, *j, *k, *x, *y;
    j= &i;
    j= j+9;//pointer plus no.
    k=&i;
    k= k-3;//pointer minus no.
    x=&arr[1];
    y=&arr[5];
    printf("%d\n",x-y);//subtraction of 1 pointer from the other
    j=&arr[4];
    k= arr + 4;
    if(j==k){//comparision of pointers.
        printf("The two pointers point at same loaction\n");
    }
    else{
        printf("The two pointer point at different loactions\n");
    }
    return 0;
}