#include <stdio.h>
#include <string.h>
#define max 50
int main()
{
	char a[max],b[max],n[max];
	int length,i,result;
	printf("enter strring :");
	scanf("%s",a);
	//printf("\nstring is :%s",a);
	//copied n from a
	strcpy(n,a);
	//printf("%s",n);
	//length of string 
	length=strlen(a);
	//printf("\nlength of string is :%d",length);
	i=0;
	while(a[i]!='\0')
	{
		b[i]=a[length-i-1];
		i++;
	}
	//printf("\n%s",b);
	result=strcmp(b,n);
	// 0 for equal
	if(result==0)
	{
		printf("\n%s is palindrome.",n);
	}
	else
	{
		printf("\n%s is not palindrome.",n);
	}
    return 0;
}