//WAP TO CALCULATE HCF OF TWO NUMBERS.
#include<stdio.h>

int main()
{
    int x,y,i,HCF;
    printf("Enter the two number:");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            HCF=(x*y)/i;
            break;
        }
    }
    printf("HCF of %d and %d is %d",x,y,HCF);
    

    return 0;
}