#include<stdio.h>
int reverse elements(int num)
{
	int rev=0;
	while (num>0)
	{
		rev=rev*10+(num%10);
		num=num/10;
	}
	return rev;
	void reverse elements(int arr[],int m)
	{
		printf("Reverse Elements:");
		for (int=0;i<n;i++)
		{
			printf("%d",reverse number(arr[i]));
		}
		printf("\n");
	}
}
int main()
{
	int arr[]=(123,456,789,102);
	int m=size of (arr)/size of (arr[0]);
	reverse elements(arr,n);
	return 0;
}
