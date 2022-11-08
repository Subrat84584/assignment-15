//smallest number in the given array.
#include<stdio.h>
int smal(int b[]);
int main()
{
	int a[10],i,s;
	printf("enter 10 number");
	s=smal(a);
	printf("smallest value is: %d",s);
	return 0;
}
int smal(int b[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	int j,m;
	for(j=1;j<=9;j++)
	{
		if(b[0]>b[j])
		b[0]=b[j];
	}
	m=b[0];
    return m;
}
