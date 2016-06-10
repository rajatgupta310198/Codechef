#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	 int N,Q;
	 scanf("%d %d",&N,&Q);
	 int A[N],t;
	 for(int i=0;i<N;i++)
	 	scanf("%d",&A[i]);
	 sort(A,A+N);
	 for(int i=0;i<Q;i++)
	 {
	 	scanf("%d",&t);
	 	// if(N==1&&t==A[0])
	 	// 	printf("Yes\n");
	 	// else 
	 		if(t>=A[0]&&t<=A[N-1])
	 		printf("Yes\n");
        else
        	printf("No\n");
	 }
	 return 0;
}