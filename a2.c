#include<stdio.h>
int Check_Perfect(int*n)
{
	int i,add=0;
	for(i=1;i<*n;i++)
	{
		if(*n%i==0)
			add=add+i;
	}
	if(*n==add)
		return 1;
	else
		return 0;
}

void perfect_Range(int start,int end)
{
	int i,n,add=0;
	for(n=start;n<=end;n++)
	{
		add=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				add=add+i;
		}
		if(add==n)
			printf("%d\n",n);
	}
}

int perfect_Count(int *p,int *q)
{
	int i,c=0,n,add=0;
	for(n = *p; n <= *q; n++)
	{
		add=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				add=add+i;
		}
		if(n==add)
			c++;
	}
	return c;
}


