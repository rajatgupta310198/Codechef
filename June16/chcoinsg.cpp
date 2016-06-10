#include <stdio.h>
#include <math.h>
inline bool checkPrime(int n)
{  int f=1;
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
		  {
		  	f = 0;
		  	break;
		  }
	if(f)
		return 1;
	else
		return 0;
}
int main(){
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
        if(N==1)
        	printf("Chef\n");
       else  { int t=0;
       	  for( int p=1,i=1;i<N-i;p++,i++)
       	  {
              if(checkPrime(N-i)&&p==(2*i-1))
              {
              	printf("Chef\n");
              	t=1;
              	break;
              }

       	  }
       	  if(t==0)
       	  	printf("Misha\n");
       }
   }
       
	return 0;
}