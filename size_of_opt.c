#include<stdio.h>
int main()
{
	int x;
	printf("%d byte\n",sizeof(x));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(5));
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	printf("%d byte\n",sizeof(long double));
}