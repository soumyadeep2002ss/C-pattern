#include<stdio.h>
int main()
{
	int i,sp,n,j,h,k,l,sp1,m,o;
	printf("Enter the size of Heart: ");
	scanf("%d",&n);
	printf("\n");
	printf("\n");
	for(i=3;i<=n;i++)
	{
		{
			for(sp=n;sp>=i;sp--)
			printf(" ");
		}
			for(j=1;j<=i;j++)
				{
					printf("* ");
				}	
			
			for(h=n;h>=i;h--)
				{
		        	printf(" ");
		    	}	
		   	for(sp=n;sp>=i;sp--)
				{
					printf(" ");
				}
			for(k=1;k<=i;k++)
				{
					printf("* ");
				}		
				printf("\n"); 
			}
			
	for(i=1;i<=n+8;i++)
	{
		{
			for(sp=1;sp<=i;sp++)
			printf(" ");
		}
			for(j=n*2+1;j>=i;j--)
				{
					printf("* ");
				}
			printf("\n");
	}
	return 0;
}

