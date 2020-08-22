#include<stdio.h>
#include<math.h>
void main()
{
	int i=0,j=0,r1,temp,r2,a[50];
	long long int n;
	printf("Enter any octal no.\n");
	scanf("%lld",&n);
	while(n!=0)
	{
		r1=n%10;
		while(i<3)
		{
			r2=r1%2;
			r1=r1/2;
			a[j]=r2;
			i++;
			j++;
		}
		if(i==3)
		{
			i=0;
		}
		 n=n/10;
	}
	temp=j;
	for(j=temp-3;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}
