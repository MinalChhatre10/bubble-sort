#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,j,n,swap,k;
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray elements before sorting :");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
	//bubble sort logic:
	for(i=0;i<n-1;i++)
	{
		printf("\npass %d",i+1);
		for(j=0;j<n-i-1;j++)
		{
			printf("\ncomparing (%d) with (%d)",j,j+1);
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
			printf("\t");
				printf("\nsorting in ascending order :");
    for(k=0;k<n;k++)
    {
    	printf("\t%d",a[k]);
	}
	printf("\n");
	getch();		
		}
		printf("\n");
	}
	printf("\nfinal sorting in ascending order :");
    for(i=0;i<n;i++)
    {
    	printf("\t%d",a[i]);
	}
		printf("\n");	
	for(i=0;i<n-1;i++)
	{
		printf("\npass %d",i+1);
		for(j=0;j<n-i-1;j++)
		{
			printf("\ncomparing (%d) with (%d)",j,j+1);
			if(a[j]<a[j+1])
			{
				swap=a[j+1];
				a[j+1]=a[j];
				a[j]=swap;
			}
			printf("\t");
				printf("\nsorting in descending order :");
    for(k=0;k<n;k++)
    {
    	printf("\t%d",a[k]);
	}
	printf("\n");
	getch();		
		}
		printf("\n");
	}
	printf("\nfinal sorting in descending order :");
    for(i=0;i<n;i++)
    {
    	printf("\t%d",a[i]);
	}
	printf("\n");	
	return 0;
}
