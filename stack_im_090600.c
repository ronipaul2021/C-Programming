#include <stdio.h>
int main()
{
	int  top=-1,item,size;
	int ch;
	printf("Enter your stack size :");
	scanf("%d",&size);
	int stack[size];
	printf("1.PUSH\n2.POP\n\n");
	while(1)
	{
		printf("Choose operation:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: //push
			  if(top==size-1)
			{
				printf("stack is full.\n");
			}
			else if(top<size-1)
			{
				printf("pushed element:");
				scanf("%d",&item);
				top=top+1;
				stack[top]=item;
//				printf("pushed element is:%d\n\n",item);
			}
			break;
			case 2: //pop
			  if(top==-1)
			{
				printf("stack is empty.\n");
			}
			
			    else 
			{
//				printf("Enter the position:");
//				scanf("%d",&stack[top]);
				item=stack[top];
				printf("poped element is:%d\n\n",stack[top]);
				top=top-1;
//				printf("poped element is:%d\n\n",stack[top]);
			}
			break;
			default:
				printf("invalid operation.");		
		}
	}
	return 0;
}