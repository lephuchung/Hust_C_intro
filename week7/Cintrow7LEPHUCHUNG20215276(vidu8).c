#include <stdio.h>
#include <math.h>
int main()
{
	int i, j;
	double sqrti;
	printf("%d\n", 2);
	for (i = 3; i <= 100; i = i + 2)
	{
		sqrti = sqrt(i);
		for (j = 2; j < i; j = j + 1)
		{
			if(i % j == 0)		break;   /* not prime */
			if(j > sqrt(i))
			{	/* prime */
				printf("%d\n", i);
				break;
			}
		} // end of for (j=2 ...
	} // end of for (i=3 ...)
	return 0;
}
