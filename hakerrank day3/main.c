#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    if (n%2 != 0)
    {
        printf("Weird");
    }

    else if (n%2 == 0 && 2 <= n && n<= 5)
    {
        printf("Not Weird");
    }

    else if (n%2 == 0 && 6 <= n && n<= 20)
    {
        printf("Weird");
    }
    else if(n%2 == 0 && n>20)
    {
        printf("Not Weird");
    }
}
