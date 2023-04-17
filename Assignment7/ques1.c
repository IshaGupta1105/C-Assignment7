//WAP TO FIND THE N TH TERM OF THE FIBONACCI SERIES.
#include<stdio.h>

int main()
{
    int a=1,b=1,c=0,num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %d th term of fibonacci series is %d",num,b);

    return 0;
}