#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,num1,num2;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
	{
	    for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				//printf("welcome.");
				break;
		    }
		}
		if(i==j)
		    printf("%d  ",i);
	    	
	}
	
	return 0;	
}

