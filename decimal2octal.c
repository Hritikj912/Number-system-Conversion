#include<stdio.h>
#include<math.h>
void main()
{
	int i=0,j=0,temp,sum,r,a[50];
	long long int n;
	printf("ENTER ANY DECIMAL NUMBER:\n");
	scanf("%lld",&n);
	printf("\nOCTAL NUMBER:\n");
	while(n!=0)
	{
		r=n%8;
		a[j]=r;
		 n=n/8;
		i++;
		j++;
	}
	temp=i;
	for(j=i-1;j>=0;j--)
	{
		 printf("%d",a[j]);
	}
}
