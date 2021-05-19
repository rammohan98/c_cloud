#include<stdio.h>
int main()
{
	int n,d,s,x;
	scanf("%d",&n);    
	s=0;
	while(n)
	{  
		d=n%10; 
		n=n/10;    
		s=s+d;    
	}
	if(s<9)
	{
		printf("%d",s); //Here if the result is single digit it will print    
	}
	else
	{
		while(s>9)//Here this loop will run upto the number becomes single digit
		{
			n=s;
			s=0;
			while(n)
			{
				x=n%10;  
				n=n/10;   
				s=s+x;
			}
		}
		printf("%d",s);
	}
	return 0;
}
