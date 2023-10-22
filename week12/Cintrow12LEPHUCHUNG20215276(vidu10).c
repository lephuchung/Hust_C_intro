#include <stdio.h> 

const int MAX = 3; 
int main () 
{
	int  var[] = {10, 100, 200};
	int i, *ptr[MAX];
	for ( i = 0; i < MAX; i++) 
	{
		ptr[i] = &var[i]; /* assign the address of integer. */
	}
	for ( i = 0; i < MAX; i++) 
	{	
		printf("Value of var[%d] = %d\n", i, *ptr[i] );
	}
	for ( i = 0; i < MAX; i++)
	{
		printf("ptr[%d]=%p\n",i, ptr[i]);
	}
	for ( i = 0; i < MAX; i++)
	{
		printf("&var[%d]=%p\n",i, &var[i]);
	}
	return 0;
	// cac bien con tro trong mang ptr tro toi cac phan tu cua mang var nen co ket qua nhu the
	// cac bien con tro trong mang ptr lan luot tro den cac phan tu trong mang var
}
