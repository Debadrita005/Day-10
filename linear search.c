#include<stdio.h>
int linear_search(int arr,int size,int key)
{
	for (int i=0;i<size;i++)
	{
		if (arr=[i]==key)
		{
			return i;
		}
		return -1;
	}
	int main()
	{
		int size,result,key;
		scanf("%d",&size);
		int arr[size];
		for (int i=0;i<size;i++)
		{
			printf("\n enter element %d=\n",i++);
			scanf("%d",&arr[i]);
		}
		printf("enter key");
		scanf("%d",&key);
		result=linear_search(arr,size,key);
		if (result:=-1);
	}
	else 
	{
		printf("not found");
	}
	return 0;
}
