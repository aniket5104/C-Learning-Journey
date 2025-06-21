/*keep taking input from the user 
until user inputs an odd no.*/
#include<stdio.h>
int main(){
    int n,i;
    // using for loop
    // for(i=1;i>0;i++){
    //     printf("Enter a no. :");
    //     scanf("%d",&n);
    //     if (n%2!=0)
    //     {
    //         break;
    //     }
    // }
    do{// using do while loop
        printf("Enter a no.");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }while(1)
    printf("Thank you");
    return 0;
}