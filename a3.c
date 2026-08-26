#include<stdio.h>
int Check_Strong(int *n)
{
	int i,add=0,t,r,k,temp;
	t=*n;
	while(t>0)
	{
		r=t%10;

		k=1;
		for(i=1;i<=r;i++){
			k=k*i;
		}
		add=add+k;

		t=t/10;
	}
	if(add==*n)
		return 1;
	else
		return 0;

}

void strong_Range(int start,int end)
{

	int i,n,t,r,add=0,k;
	for(n=start;n<=end;n++)
	{
		t=n;
		add=0;
		while(t>0)
		{
			r=t%10;

			k=1;
			for(i=1;i<=r;i++)
			{
				k=k*i;
			}
			add=add+k;
			t=t/10;
		}
		if(add==n)
			printf("%d\n",n);
	}
}

int strong_Count(int *p, int *q)
{
	int i, n, t, r, k, add=0,c=0;

	for(n = *p; n <= *q; n++)
	{
		t = n;
		add = 0;
		while(t > 0)
		{
			r = t % 10;
			k = 1;
			for(i = 1; i <= r; i++)
			{
				k = k * i;
			}
			add = add + k;
			t = t / 10;
		}
		if(add == n)
			c++;
	}
	return c;
}

