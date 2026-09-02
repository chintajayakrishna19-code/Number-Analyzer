#include<stdio.h>
int my_atoi(char*s);
int main(){
	char s[100];
	printf("enter string:\n");
	scanf("%s",s);
        printf("%d\n",my_atoi(s));
}
     int my_atoi(char*p)
{

	
	int a=0,sign=1;
	while(*p==' ')
	{
		p++;
	}
	if(*p=='-')
	{
		sign=-1;
		p++;
	}
	else if(*p=='+')
	{
		p++;
	}
         while(*p>='0'&&*p<='9')
	{
		a=a*10+*p-'0';
		p++;
	}
	return a*sign;
}

																		
