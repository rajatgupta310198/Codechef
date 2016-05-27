#include <stdio.h>
using namespace std;
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int A[N],B[N];
		for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
		for(int i=0;i<N;i++)
		scanf("%d",&B[i]);
		int c=0;
		for(int i=0;i<=N;i++)
		{
			if(i==0)
		{
				if(A[i]>=B[i])
			c++;
		}
			else
			{
				if(A[i]-A[i-1]>=B[i])
				c++;
			}
		}
		printf("%d",c);
	}
	return 0;
}
