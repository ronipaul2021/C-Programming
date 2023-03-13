#include <stdio.h>
// function without arguments and with return values.
int addition();
int substraction();
int multiplication();
float division();
int main()
{
	int n,sum,sub,mul;
	float div;
	printf("\n1. ADDITION (+)\n");
	printf("2. SUBSTRACTION (-)\n");
	printf("3. MULTIPLICATION (*)\n");
	printf("4. DIVISION (/)\n");
	printf("--------------------");
	printf("\nwhat do you want to perform ?\n---> ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		    sum=addition();
		    printf("\nsummation is %d",sum);
		    break;
		    case 2:
		    	sub=substraction();
		    	printf("\nsubstraction is %d",sub);
		    	break;
		    	case 3:
		    		mul=multiplication();
		    		printf("\nmultiplication is %d",mul);
		    		break;
		    		case 4:
		    			div=division();
		    			printf("\ndivision is %.2f",div);
		    			break;
		    			default :
		    				printf("invalid input.");
	}
	
	return 0;
}

int addition()
{
	int a,b,sum;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	sum=a+b;
	return sum;
}

int substraction()
{
	int a,b,sub;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	sub=a-b;
	return sub;
}

int multiplication()
{
	int a,b,mul;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	mul=a*b;
	return mul;
}

float division()
{
	float a,b;
	float div;
	printf("enter first number :");
	scanf("%f",&a);
	printf("enter second number :");
	scanf("%f",&b);
	div=a/b;
	return div;
}