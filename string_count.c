#include <stdio.h>
#include <string.h>
// implimentation of 'strlen()' function
/*int string(char st[]);
int main()
{
	int count;
	char ch[]="RONI";
	count=string(ch);
	printf("Numbers of character in this string is :%d",count);
	return 0;
}

int string(char st[])
{
	int i=0;
	int count=0;
	while(st[i]!='\0')
	{
		count=count+1;
		i++;
	}
	return count;
}


int main()
{
	int count=0,i=0;
	char ch[]="RONI";
	while(ch[i]!='\0')
	{
		count=count+1;
		i++;
	}
	printf("Number of characters in a string is :%d",count);
	return 0;
}
*/
// use of strlen() function
int main()
{
	char ch[]="RONI";
	int count;
	//name=fgets(ch);
	count=strlen(ch);
	printf("%d",count);
	return 0;
}