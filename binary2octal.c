#include<stdio.h>
void main()
{
//We are assuming here that Binary number is written for Positive number
long long int n,sum=0;
int i=0,j=0,temp,r,a[100],k=0;
printf("ENTER ANY BINARY NUMBER\n");
scanf("%lld",&n);
printf("OCTAL NUMBER:\n");
while(n!=0)
{
r=n%10;
n=n/10;
sum=sum+r*power(k);
k++;
}
	while(sum!=0)
	{
		r=sum%8;
		a[j]=r;
		 sum=sum/8;
		i++;
		j++;
	}
	temp=i;
	for(j=i-1;j>=0;j--)
	{
		 printf("%d",a[j]);
	}
}

int power(int k)
{
	int i,p=1;
	for(i=k;i>=1;i--)
	{
		p=p*2;
	}
	return p;
}
   

