#include <stdio.h>
// checking string contains digit or alphabates.
int main()
{
	int i=0,flag;
	char a[50];
	printf("Enter any string :");
	scanf("%s",a);
	printf("entered string is %s.\n",a);
	flag=0;
	while(a[i]='\0')
	{
		if(a[i]>='0' && a[i]<='9')
		{
		    flag=1;
		}
	}
	if(flag==1)
	{
		printf("string contains alphabates.");
	}
	else 
	{
		printf("string contains digit.");
	}
	return 0;
}