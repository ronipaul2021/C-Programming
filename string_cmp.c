#include <stdio.h>
#define max 50
int main()
{
	char a[max];
	printf("enter your first string :");
	scanf("%s",a);
	char b[max];
	printf("enter your second string :");
	scanf("%s",b);
	int i=0,count=0,flag;
	flag=0;
	while(a[i]!='\0')
	{
		if(a[i]==b[i])
		{
			flag=1;
			count=count+1;
		}
		i++;
	}
	if(flag==1)
	{
		printf("strings are same.");
	}
	else
	{
		printf("strings are not same.");
	}
//	printf("%d",count);
	return 0;
}