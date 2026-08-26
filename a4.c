#include<stdio.h>
int Check_Armstrong(int *n)
{
	int i,add=0,t,t1,k,c=0,r;
	t=*n;
	while(t>0)
	{
		c++;
		t=t/10;
	}
	t1=*n;
	while(t1>0)
	{
		r=t1%10;
		k=1;
		for(i=1;i<=c;i++)
			k=k*r;
		add=add+k;
		t1=t1/10;
	}
	if(add==*n)
		return 1;
	else
		return 0;
}

void armstrong_Range(int start,int end)
{
	int i,r,t,add=0,c=0,t1,k,n;
	for(n=start;n<=end;n++)

	{
		add=0;
		t=n;
		c=0;
		while(t>0)
		{
			c++;
			t=t/10;
		}
		t1=n;
		while(t1>0)
		{
			r=t1%10;
			k=1;
			for(i=1;i<=c;i++)
			{
				k=k*r;
			}
			add=add+k;

			t1=t1/10;
		}
		if(add==n)
			printf("%d\n",n);
	}
}

int armstrong_Count(int *p,int *q)
{
	int i,n,t,t1,r,k,add=0,c=0,count=0;
	for(n = *p; n<= *q; n++)
	{
		t=n;
		add=0;
		c=0;
		while(t>0)
		{
			c++;
			t=t/10;
		}
		t1=n;
		while(t1>0)
		{
			r=t1%10;
			k=1;
			for(i=1;i<=c;i++)
			{
				k=k*r;
			}
			add=add+k;
			t1=t1/10;
		}
		if(add==n)
			count++;
	}
	return count;
}

