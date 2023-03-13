#include <stdio.h>
// function with arguments/parameters and one return value.
int summation(int x, int y);
int substraction(int p, int q);
int multiplication(int s, int t);
int division(int e, int f);
int main()
{
	int a,b;
	char opt;
	printf("\nenter the first number :");
	scanf("%d",&a);
	printf("choose operator (+,-,*,/) :");
	scanf(" %c",&opt);
	printf("enter the second number :");
	scanf("%d",&b);
	switch(opt)
	{
		case '+':
			summation(a,b);
			printf("\nsummation is :%d",summation(a,b));
			break;
			case '-':
				substraction(a,b);
				printf("\nsubstraction is :%d",substraction(a,b));
				break;
				case '*':
					multiplication(a,b);
					printf("\nmultiplication is :%d",multiplication(a,b));
					break;
					case '/':
						division(a,b);
						printf("\ndivision is :%d",division(a,b));
						break;
						default :
							printf("\n invalid operator.");
	}
	return 0;
}

int summation(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int substraction(int p, int q)
{
	int r;
	r=p-q;
	return r;
}

int multiplication(int s, int t)
{
	int u;
	u=s*t;
	return u;
}

int division(int e, int f)
{
	int d;
	d=e/f;
	return d;
}