#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a, b;
	srand(time(NULL));
	a=1+rand()%10;
	printf("Nhap vao so ban doan la: ");
	scanf("%d", &b);
	if(b>a) 
	{
		printf("So ban doan lon hon so cua toi!\n");
		printf("Ket qua la: %d\n", a);
	}
	if(b==a) printf("So ban doan bang so cua toi!\n");
	if(b<a) 
	{
		printf("So ban doan nho hon so cua toi!\n");	
		printf("Ket qua la: %d\n", a);
	}
}
