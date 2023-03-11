#include<stdio.h>
int main()
{
	int a[5];
	int left,right,i,j,mid,x;
	left=0;
	right=5;
	printf("enter your array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nyour array is :");
	for(i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\nenter the searching element :");
	scanf("%d",&x);
	for(j=0;j<5;j++)
	{
		mid=(left+right)/2;
		if(a[mid]==x)
		{
			printf("\nsearched element is %d in index %d",a[mid],mid);
			return 0;
		}
		else if(a[mid]>x)
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	//return 0;
}