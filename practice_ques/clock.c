#include<stdio.h>
#include<time.h>
#include<conio.h>
int main(){
    int hh, mm, ss;
    printf("enter time in hh:mm:ss format:");
    scanf("%d%d%d",&hh,&mm,&ss);
    for(int i=hh;i<=12;i++){      
        for(int j=mm;j<60;j++){  
            for(int k=ss;k<60;k++){
                printf("%d : %d : %d\n",i,j,k);
                sleep(1);              
                ss++;  
            }
            mm++;
            ss=0;
        }
        hh++;
        mm=0;
    }
    return 0;
}

