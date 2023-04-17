//WAP TO CHECK WHETHER A GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.
#include<stdio.h>

int main()
{
    int num,x,count=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    x=num;
    while(x!=0)
    {
        count=x%10;
        sum=sum+count*count*count;
        x=x/10;
    }
    
    if(num==sum)
       printf("%d is armstrong number\n",num);
    else
       printf("%d is not armstrong number\n",num);
    return 0;
}