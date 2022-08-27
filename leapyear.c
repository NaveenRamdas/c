
#include<stdio.h>
void main()
{
    int days,x;
    printf("enter the days:");
    scanf("%d",&days);
    x=(days%4==0)?printf("Its Leap year"):printf("Its not a Leap Year");
}
