#include<stdio.h>
#include<conio.h>
int a[20][20],b[20][20],c[20][20];
void main()
{
	int i,j,k,n;
	clrscr();
	printf("\nEnter the order of Matrix(order of 2):=");
	scanf("%d",&n);
	printf("\nEnter first matrix:=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]:=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter second matrix:=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("B[%d][%d]:=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	clrscr();
	printf("\nMatrix A :=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B :=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]+b[k][j];
			}
		}
	}
	printf("\nMultiplication of two matrix A*B=C :=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}