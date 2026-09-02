#include<stdio.h>
float my_atof(char*s);
int main(){
	char s[100];
	printf("enter string:\n");
	scanf("%s",s);
	printf("%f\n",my_atof(s));
}
float my_atof(char*p)
{
	float A=10,a=0,sign=1;
	while(*p==' ')
		p++;
	if(*p=='-')
	{
		sign=-1;
		p++;
	}
	else if(*p=='+')
		p++;
        while(*p>='0' && *p<=*p)
        {
               a=a*10+*p-48;
              p++;

}
	if(*p=='.')
	{
		p++;
		while(*p>='0'&&*p<='9')
		{
			a=a+(*p-'0')/A;
			A=A*10;
			p++;
		}
	}
	return a*sign;
}

