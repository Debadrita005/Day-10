#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int array[n];
	{
		printf("enter %d elements:\n",n);
		for (i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		printf("array in reverse order:\n");
		for (i=n-1;i>0;i--)
		{
			printf("%d",array[i]);
		}
		printf("\n");
		return 0;
	}
}
