#include <stdio.h>
#include <math.h>
 
int main(){
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
               if(N==1)
               printf("Chef\n");
               else
               {   bool suc = 0;
               	for(int i=0;i<N;i++)
               	{
               		if(pow(2,i)==N)
               		{
               			printf("Chef\n");
               			suc = 1;
               			break;
               		}
               	}
               	if(!suc)
               	printf("Misha\n");
               }
       }
	return 0;
}
