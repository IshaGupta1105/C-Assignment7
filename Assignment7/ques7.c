//WAP TO PRINT ALL PRIME NUMBER BETWEEN TWO GIVEN NUMBER.
#include<stdio.h>

int main()
{
int i,j,a,b;
printf("Enter the two number:\n");
scanf("%d%d",&a,&b);
    printf("The prime number between %d and %d are:\n",a,b);
    
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\n",i);
    }
return 0;
}