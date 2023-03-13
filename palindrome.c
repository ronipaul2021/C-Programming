#include <stdio.h>
int main()
{
	int n,a,result=0;
	printf("Enter any positive integer no :");
	scanf("%d",&n);
	int orginal;
	orginal=n;
	while(n!=0)
	{
		a=n%10;
		result=result*10+a;
//		printf("%d",a);
		n=n/10;
	}
	printf("\nresult :%d",result);
	if(result==orginal)
	{
		printf("\n\nthe number is palindrome.");
	}
	else
	{
		printf("\n\nthe number is not a palindrome.");
	}
	return 0;
}