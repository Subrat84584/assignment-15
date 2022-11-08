//10.write a program to print the friquence of a array element.
#include<stdio.h>
int main()
{
	int arr[100],freq[100];
	int size,i,j,count;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter element in array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("\n frequence of all element of array:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occers %d times\n",arr[i],freq[i]);
		}
	}
	return 0;
}
