#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    printf("enter the number to calculate the sum ");
    scanf("%d",&num);

    for(i=1 ; i<=num ; ++i)
    {
        sum += i;

    }
     printf("sum of numbers is %d ",sum);

}
