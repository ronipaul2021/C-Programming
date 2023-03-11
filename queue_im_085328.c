#include <stdio.h>
#define size 5
int f=-1,r=-1;
int item;
int q[size];
void push();
void pop();
void display();
int main()
{
	int ch;
	printf("\n1. PUSH\n2. POP\n3. DISPLAY\n\n");
    
    while(1)
    {
    	printf("\n>>> choose operation :");
    	scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    		push();
	    		break;
	    	 	case 2:
		    		pop();
			    	break;
			    	case 3:
			            display();
			            break;
			            default :
					        printf("\n--invalid operator--");
				    
    	}	
    }
	return 0;
}

void push()
{
    	if(r == size-1)
    	{
	    	printf("\n>> OVER FLOW <<\n");
	    }
    	else if(f==-1 && r==-1)
	    {
		    r=0;
		    f=0;
    		printf("\n->pushed element :");
    		scanf("%d",&item);
	    	q[r]=item;
	    }
    	else
	    {
		    r=r+1;
	    	printf("\n->pushed element :");
	    	scanf("%d",&item);
	    	q[r]=item;
	    }	    
}

void pop()
{
	if((f==-1 && r==-1) || r<f )
	{
		printf("\n<- UNDER FLOW ->\n");
	}
	else
	{
		item = q[f];
		printf("\n<- poped element is :%d",q[f]);
		f=f+1;
	}
}

void display()
{
	int i;
	printf("\n--> ELEMENTS ARE :\n");
	if(r <= size-1)
	{
		for(i=0;i<size;i++)
    	{
    		printf("%d\n",q[i]);
	    }
	}
	else
	{
		printf("\n*** No elements are there ***\n");
	}
}