//WAP TO PRINT NEXT PRIME NUMBER OF GIVEN NUMBER.
#include<stdio.h>

int main()
{
    int i,n,x;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        for(x=2;x<i;x++)
        {
            if(i%x==0)
            break;
        }
        if(i==x)
        break;
    }
    printf("The next prime number of %d is %d",n,i);
    return 0;
}