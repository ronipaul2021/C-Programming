#include <stdio.h>
int main()
{
	int match_stick=21;
	int u,c;
	while(match_stick>=1)
	{
		printf("\nchoose match stick between 1 to 4 :");
		scanf("%d",&u);
		if( u>4)
		{
	        printf("\ninvalid input.");
	        break;
		}
		else if(match_stick==1)
		{
			printf("\n\nuser has been lost by computer.");
			break;
		}
		else
		{
			c=5-u;
			printf("computer picks :%d",c);
			match_stick=match_stick-c-u;
			printf("\ntotal match stick:%d ",match_stick);
		}
		
	}
//	if(u==1)
	//	{
	//		printf("\n\nuser has been lost by computer.");
			
	//	}
	return 0;
}