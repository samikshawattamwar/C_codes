#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=1; i<=t; i++)
	{
	    int a,b,ans=0;
	    int m=1;
	    scanf("%d%d",&a,&b);
	    while(a!=0 || b!=0 )
	    {
	        int z = ((a%10) + (b%10))%10;
	        ans = ans + z*m;
	        
	        a = a/10;
	        b = b/10;
	        m = m*10;
	    }
	    printf("%d\n",ans);
	    
	}
	

}