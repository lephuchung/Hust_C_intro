#include <stdio.h>

int main() 
{
	int x[4];
	int i;
	for(i = 0; i < 4; ++i) 
	{
		printf("&x[%d] = %p\n", i, &x[i]);
	}
	printf("Address of array x: %p", x);
	return 0;
	//&x[i] tro den dia chi cua cac phan tu trong mang x
	//x la dia chi bit nho dau tien cua mang
}
