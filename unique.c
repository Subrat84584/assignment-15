//8.write a function in c to print all unique element in an array.
#include<stdio.h>
int unique(int b[]);
int main()
{
    int a[10];
	printf("enter 10 values");
	unique(a);	
} 
int unique(int b[])
{
	int i,j,count;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
		count=0;
		for(j=0;j<=9;j++)
		{
			if(i!=j)
			{
			   if(b[i]==b[j])
			   count++;
		    }
		}
		if(count==0)
	{
		printf("unique value is:%d\n",b[i]);
	}
	}
	return 0;
	
}
