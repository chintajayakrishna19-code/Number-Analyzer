:wq#include<stdio.h>
int Check_Prime(int*n)
{
	int i;
	for(i=2;i<*n;i++)
	{
		if(*n%i==0)
			break;
	}
	if(*n==i)
		return 1;
	else
		return 0;
}

void prime_Range(int start,int end)
{
	int i,n;
	for(n=start;n<=end;n++)

	{		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(n==i)
			printf("%d\n",n);
	}
}

int prime_Count(int *p,int *q)
{
	int i,count=0,n;
	for(n = *p; n<= *q; n++)
	{

		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}

		if(n==i)
			count++;
	}

	return count;
}
