#include <stdio.h>

int main()
{
	int a[5];
	int x,loc=-1;
	printf("\nenter your array element :\n ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your array is :");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter your element that you want to find from your array :");
	scanf("%d",&x);	
	for(int i=0;i<5;i++)
	{
		loc=loc+1;
		if(a[loc]==x)
		{
		//	loc=loc+1;
			printf("\nyour element is %d in a[%d] index,location %u.",x,loc,&a[i]);
		}
	}
//	printf("\nItem not found.");
	return 0;
}