//4.rotate the value of any array.
#include<stdio.h>
int main()
{
	int a[5];
	printf("enter 5 value of your size");
	rotate(a);
}
int rotate(int b[])
{
	int i;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
