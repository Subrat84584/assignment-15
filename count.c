//7.write a function in c to count a total number of duplicate element in an array.
#include<stdio.h>
int dupli(int b[]);
int main()
{
	int a[10];
	printf("enter 10 values");
	dupli(a);
}
int dupli(int b[])
{
	int i,j,count=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(b[i]==b[j])
			{
			  count++;
			  break;
		    }
		}
	}
    printf("Total number of duplicate value :%d",count);
	return 0;
	
}
