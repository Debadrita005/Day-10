#include<stdio.h>
int main()
{
	int a[2][2]={5,6,9},i,j;
	int b[2][2]={6,9,8,2};
	int c[2][2];
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",a[i][j]);
			printf("%d",b[i][j]);
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
