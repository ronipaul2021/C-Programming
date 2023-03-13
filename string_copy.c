#include <stdio.h>
#include <string.h>
#define max 50
// implimentation of strcpy() function
int main()
{
	char a[max];
	char b[max];
	printf("Enter any name which you want to copy :");
	scanf("%s",a);
	int i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
	//	printf("\n%s",b);
		i++;
	}
	printf("the string is : %s",b);
	return 0;
}
// using strcpy() function
/*int main()
{
    char str1[]="c programming";
	char str2[20];
	strcpy(str2,str1);
	puts(str2);
	return 0;	
}*/