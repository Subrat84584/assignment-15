//sort
#include<stdio.h>
int sort(int b[]);
int main()
{
	int a[5]={5,4,3,2,1};
	int i;
	int p;
	sort(a);
	printf("sorting is:");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int sort(int b[])
{
	int i,j,n;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(b[i]>b[j])
			{
			   n=b[i];
			   b[i]=b[j];
			   b[j]=n;	
			}
		}
	}
    //return b;
}
