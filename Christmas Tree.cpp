#include<stdio.h>
main()
{
	int i,j,k,l,n,r,t;
	printf("Enter the size of the Christmas Tree: ");
	scanf("%d",&n);
		for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("  ");
		}
		for(l=n;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
		
			for(j=1;j<=i;j++)
		{
		printf("  ");
		}
		for(l=n;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
	}
	for(r=1;i<=n-3;i++)
	{
		for(r=1;r<=n-1;r++)
		{
			printf("  ");
		}
		for(t=1;t<=n+1;t++);
		{
			printf("* * * ");
		}
		printf("\n");
	}
	
		for(i=n-7;i>=1;i--)
	{
		for(j=1;j<=i+5;j++)
		{
		printf("  ");
		}
		for(l=n-8;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n-2;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}
