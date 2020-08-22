#include<stdio.h>
void main()
{
//We are assuming here that Binary number is written for Positive number
long int n;
int r,k=0,sum=0;
printf("ENTER ANY BINARY NUMBER\n");
scanf("%lld",&n);
printf("\nHEXADECIMAL NUMBER:\n");
while(n!=0)

{r=n%10;

n=n/10;
sum=sum+r*power(k);

k++;}

printf("%x",sum);


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
   

