#include<stdio.h>
int Check_Palindrome(int *n)
{
	int i,temp,num,rev=0,r;
	temp=*n;
	for(rev=0;temp;temp=temp/10)
	{

		r=temp%10;
		rev=rev*10+r;
	}
	if(*n==rev)
		return 1;
	else
		return 0;
}

void palindrome_Range(int start,int end)
{
	int i,rev=0,r,temp,n;
	for(n =start; n <= end; n++)
	{
		temp=n;
		for(rev=0;temp;temp=temp/10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		if(n==rev)
			printf("%d\n",n);
	}
}

int palindrome_Count(int*p,int*q)
{
	int i,rev=0,r,t,n,c=0;
	for(n = *p; n <= *q; n++)
	{
		t=n;
		for(rev=0;t;t=t/10)
		{
			r=t%10;
			rev=rev*10+r;
		}
		if(n==rev)
			c++;

	}
	return c;
}
