#include <stdio.h>
#include <math.h>

int main()
{
	//in ra cac so nguyen to
	//khai bao bien
	int i, j;
	//giai thuat va dien dap an
	printf("%d\n", 2);
	for (i = 3; i <= 100; i = i + 1)
	{
		// if (i % 2 == 0)
		// break;
		for (j = 2; j < i; j = j + 1)
		{
			if (i % j == 0)
				break;
			if (j > sqrt(i))
			{	
				printf("%d\n", i);
				break;
			} 
		} 
	}
	return 0;
}
