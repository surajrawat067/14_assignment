#include<stdio.h>
int main ()
{
    int n[10], i=0, se=0, so=0;
    printf("enter 10 numbers \n");
    for( i=0; i<=9; i++)
        scanf("%d",&n[i]);
    for(i=0;i<=9;i++)
     {   if(n[i]%2==0)
          se=se+n[i];
            else
                so=so+n[i]; 
                }
        
        printf("even no is %d and odd no is ",se,so);
        return 0;

    
}