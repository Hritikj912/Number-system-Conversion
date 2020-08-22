#include<stdio.h>
void main()
{//it can give solution of utmost 15 bit octal no.
long long int n;
int r,k=0,sum=0;
printf("ENTER ANY OCTAL NUMBER\n");
scanf("%lld",&n);
printf("\nHEXA-DECIMAL NUMBER:\n");
while(n!=0)
{r=n%10;
n=n/10;
sum=sum+r*power(k);
k++;}
printf("%x",sum);
}
int power(int k)
{	int i,p=1;
	for(i=k;i>=1;i--)
		{		p=p*8;	}
		return p;
}
