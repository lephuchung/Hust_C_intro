#include <stdio.h>
#define MONTHS 12
/* store and display rainfall in all months of the year */
int main()
{
	int rainfall[MONTHS];
	int i;
	for ( i=0; i < MONTHS; i++ )
	{
	printf("Enter the rainfall(mm):");
	scanf("%d", &rainfall[i] );
	}
	/* Print from January to December */
	for ( i=0; i < MONTHS; i++ ) 
	{
		printf( "%5d" , rainfall[i]);
	}
	printf("\n");
	return 0;
}
