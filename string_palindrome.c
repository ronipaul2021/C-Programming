#include <stdio.h>
#include <string.h>
#define max 50
int main()
{
	char a[max],b[max],n[max];
	int length,i,result,flag;
	printf("enter strring :");
	scanf("%s",a);
//	printf("\nstring is :%s",a);
//	copied n from a
	strcpy(n,a);
//	printf("%s",n);
//	length of string 
	length=strlen(a);
//	printf("\nlength of string is :%d",length);
	flag=0;
	i=0;
	while(a[i]!='\0')
	{
		b[i]=a[length-i-1];
		if(b[i]!=a[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		printf("\n%s is not palindrome.",n);
	}
	else
	{
		printf("\n%s is  palindrome.",n);
	}
	return 0;
}