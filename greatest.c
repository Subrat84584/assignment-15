//1.write a function to find the greatest number in the given array size.
#include<stdio.h>
int greatest(int b[]);
int main()
{
	int a[5];
	int T=greatest(a);
	printf("your greatest number is:%d",T);
	return 0;
}
int greatest(int b[])
{
	int i;
	printf("enter your value ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=4;i++)
	{
		if(b[0]<b[i])
		{
			b[0]=b[i];
		}
	}
	int m=b[0];
	return m;
}
