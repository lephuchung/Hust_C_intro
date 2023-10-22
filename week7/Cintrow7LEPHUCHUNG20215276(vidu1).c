#include <stdio.h>

int main()
{
	int i; 
	int x = 0; 
	for (i=1; i<=100; i++) 
	{
		x += i;
		if ((x % i) == 0) 
		{ 
			i--; 
		}
	}
	printf("x = %d", x);
	printf("i = %d", i);	
	//chuong trinh khong co diem ket thuc
}
