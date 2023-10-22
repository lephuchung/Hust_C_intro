#include <stdio.h>

int main()
{
	//bang cuu chuong 
	//khai bao bien
	int cuuchuong[10][10];
	int i, j;
	//giai thuat va dien dap an
	for(i=0; i<=9; i++)
	{
		for(j=0; j<=9; j++)
		{
			cuuchuong[i][j] = i*j;
		}
	}
	printf("Nhap hai so cua bang cuu chuong\n");
	printf("So 1: "); scanf("%d", &i);
	printf("So 2: "); scanf("%d", &j);
	printf("Gia tri trong bang la %d", cuuchuong[i][j]);
}
