#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	nearfib(num);
	return 0;
}
void nearfib(int num)
{
	int a=0,b=1,i,k,x,c=0;
    while(c<num)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if(c==num)
	{
	 printf("true");
	 return;
	}
	 else
	 {
	 	k=b-num;
	 	x=num-a;
	 }   
	 if(k<x)
	 printf("%d",b);
	 if(k>x)
	 printf("%d",a); 
	 if(k==x)
	 printf("%d %d",a,b);  
}
