#include <stdio.h>

int main() 
{
	int x[5] = {1, 2, 3, 4, 5};
	int* ptr;
	// ptr is assigned the address of the third element
	ptr = &x[2]; 
	printf("*ptr = %d \n", *ptr);   
	// 3
	printf("*(ptr+1) = %d \n", *(ptr+1)); 
	// 4
	printf("*(ptr-1) = %d \n", *(ptr-1));  
	// 2
	//ban dau ptr tro toi x[2] nen in ra gia tri bang *ptr=3
	//ptr+1=x+2+1=x[3] nen in ra gia tri *ptr=4
	//ptr-1=x+2-1=x[1] nen in ra gia tri *ptr=2
	printf("ptr = %p\n", ptr);
	printf("ptr+1 = %p\n", ptr+1);
	printf("ptr-1 = %p\n", ptr-1);	
	return 0;
}
