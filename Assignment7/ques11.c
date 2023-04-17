//WAP TO FIND THE POSITION OF FIRST 1 IN LSB.
#include<stdio.h>

int main()
{
    int x,count=0;
    printf("Enter the number:\n");
    scanf("%d",&x);
    while(x!=0)
    {
        count++;
        if(x&1==1)
         break;
        else
         x=x>>1;
    }
    printf("The position of first 1 from LSB is %d.",count);
    return 0;
}