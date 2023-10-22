#include <stdio.h>

int main()
{
	int i;
	for(i = 1; i <= 10; i = i + 1)
	{	
		printf("%d  %d\n", i, i * i);
	}
	return 0;
}
