#include <stdio.h>
#include <time.h>
main()
{
    int h,m,s,i,j,k;
    printf("enter the time in hh:mm:ss :");
    scanf("%d %d %d",&h,&m,&s);
    if(h>24)
    h=0;
    if(m>60)
    m=0;
    if(s>60)
    s=0;
    
    for( i=1; i<=24; i++)
    {
        for( j=1; j<60; j++)
        {
            for( k=1; k<60; k++)
            {   
                printf("%d:%d:%d\n",h,m,s);
                sleep(1);
                
                s++;
            }
            
            m++;
            s=0;
        }
        h++;
        m=0;
    }

}