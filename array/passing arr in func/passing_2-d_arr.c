#include<stdio.h>
void func(int array[2][2]);
int main(){
    int arr[2][2]={{2,3},{4,5}};
    func(arr);
    return 0;
}
void func(int array[2][2]){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("Element at (%d,%d) is %d\n",i,j,array[i][j]);
        }
    }
}