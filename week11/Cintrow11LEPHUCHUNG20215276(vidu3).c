#include <stdio.h>

int main()
{
	int i=0;
	int a[7]={13,-355,235,47,67,943,1222};
	for(i;i<5;i++)
	{
		printf("%d ", a[i]);
		printf("dia chi cua o %d la: %p\n", i, &a[i]);
	}
}
