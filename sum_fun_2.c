#include <stdio.h>
int multiply();
int main()
{
	int mul;
	char ch;
    printf("enter operation:");
    ch=getchar();
    switch(ch)
    {
    	case 'm':
    		mul=multiply();
	        printf("%d",mul);
	        break;
	        default :
	        	printf("invalid input.");
	}
	
	return 0;
}

int multiply()
{
	int x,y,mul;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	mul=x*y;
	return mul;
}