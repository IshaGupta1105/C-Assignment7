//WAP TO CHECK WHETHER TWO GIVEN NUMBER ARE  CO-PRIME NUMBER OR NOT.
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
    if(HCF==1)
      printf("Number is co-prime.\n");
    else
      printf("Number is not co-prime.\n");
    return 0;
}