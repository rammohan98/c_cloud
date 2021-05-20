#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//example:n=6;
	series(n);
	return 0;
	
}
int series(int n)
{
	if(n==1)
	{
		return 0;
	}
		printf(" %d",n);//final output= 6 3 10 5 16 8 4 2
		if(n==2)
		{
			printf(" 1");//here in this series we will not get 0 so, printing 1 at last.
		}
		return (n%2)?series(n=3*n+1):series(n=n/2);	/*Here (n%2) is same like if condition,
		if it is true it executes the series(n=3*n+1),else it executes series(n=n/2) */
		
}
