//WAP TO CHECK WHETHER A GIVEN NUMBER IS THERE IN THE FIBONACCI SERIES OR NOT.
#include<stdio.h>

int main()
{
    int fib1=1,fib2=1,fib3,num,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        fib3=fib1+fib2;
        if(num==fib3)
          flag=1;
        fib1=fib2;
        fib2=fib3;  
    }
    if(flag==1)
    printf("Number is present in the fibonacci series.\n");
    else
    printf("Number is not present in the fibonacci series.\n");

    return 0;
}