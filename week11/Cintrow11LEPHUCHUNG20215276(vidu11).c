#include <stdio.h> 
int main()
{
	int *ptr;
	int x;
	ptr = &x;//*ptr tro vao x
	*ptr = 0;//*ptr=x=0
	printf(" x = %d \n", x);
	printf(" *ptr = %d \n", *ptr); 
	*ptr += 5;//x+=5
	printf(" x  = %d \n", x);
	printf(" *ptr = %d \n", *ptr); 
	(*ptr)++;//x++
	printf(" x = %d \n", x);
	printf(" *ptr = %d \n", *ptr); 
	return 0;
} 
