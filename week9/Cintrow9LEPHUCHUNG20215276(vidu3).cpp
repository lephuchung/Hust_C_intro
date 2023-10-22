#include <stdio.h>
int giaithua (int a) 
{
	int i, gt=1;
	for(i=1; i<=a; i++)
	gt = gt * i;
	return gt;
}
int main(void) 
{
	int num;
	printf("Nhap so nguyen:");
	scanf("%d",&num);
	printf("%d!=%d\n", num, giaithua(num));
}
