#include<stdio.h>
void main()
{//IT can convert atmost an 8 bit Hexadecimal number
unsigned long long int n;
int r,k=0,sum=0;
printf("ENTER ANY HEXADECIMAL NUMBER\n");
scanf("%x",&n);
printf("\nDECIMAL NUMBER:\n");
while(n!=0)
{r=n%10;
n=n/10;
sum=sum+r*por(k);
k++;}
printf("%x",sum);}
int por(int k)
{	int i,p=1;
	for(i=k;i>=1;i--)
	{		p=p*16;	}
		return p;
}

