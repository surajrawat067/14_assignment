#include<stdio.h>
int main ()
{
    int sort[10],i,j,a;
    printf("Enter numbers for sort\n");
    for(i=0;i<10;i++)
    scanf("%d",&sort[i]);
    for(i=0;i<=9;i++)
    {for(j=i+1;j<10;j++)
    if(sort[i]>sort[j])
    {a=sort[i];
    sort[i]=sort[j];
    sort[j]=a;
    
    }
    
    
    }for(i=0;i<10;i++)
printf("\n%d ",sort[i]);
      
}