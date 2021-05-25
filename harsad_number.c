#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 harshadnum(num);
 return 0;
}
void harshadnum(int num)//harshad number means the given number is divided by sum of the digits in that number/.
{
	int r,sum=0,n;
	n=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("harshad number is:%d",n/sum);
}
