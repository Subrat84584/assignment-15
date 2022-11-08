//6.write a function in c to read n number of values in an array and display it in reverse order
#include<stdio.h>
int reverse(int b[]);
int main()
{
	int a[10];
	printf("enter 10 value and see it reverse");
	reverse(a);
	return 0;
}
int reverse(int b[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("\n%d",b[i]);
	}
	return 0;
}
