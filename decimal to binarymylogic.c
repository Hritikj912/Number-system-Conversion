#include<stdio.h>
#include<conio.h>
void main()
{	int n,i=0,r,temp,a[50];
	printf("Enter decimal number\n");
	scanf("%d",&n);
	while(n!=0)
	{ r=n%2; 
	  n=n/2;		
	  a[i]=r;
	  i++;
	}	
	temp=i;
	for(i=temp-1;i>=0;i--)	
	{
	printf("%d",a[i]);
	}
}
