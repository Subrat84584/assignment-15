//5.write a program to find the first occurance duplicate value
#include<stdio.h>
int duplicate(int b[]);
int main()
{
	int a[5];
	printf("enter 5 value :");
	duplicate(a);
}
int duplicate(int b[])
{
	int i,j,flag=0;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(b[i]==b[j])
			flag++;
		}
		if(flag==1)
		printf("fst duplicate value is :%d",b[i]);
	}
	return 0;
}
