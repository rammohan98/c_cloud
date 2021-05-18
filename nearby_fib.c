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
	if(c==num)//Here if given number is there in fibanocci series it will print True
	{
	 printf("true");
	 return;
	}
	 else
	 {
	 	k=b-num;
	 	x=num-a;
	 }   
	//Here if the given number is not there in the fibanocci series it will print the nearest value for given number 
	 if(k<x)
	 printf("%d",b);
	 if(k>x)
	 printf("%d",a); 
	 if(k==x)
	 printf("%d %d",a,b);  
}
