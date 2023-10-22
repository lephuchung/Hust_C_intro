#include <stdio.h>
#include <string.h> // For strstr
void main(void)
{
	char prods[5][27] = {"TV127  31 inch Television","CD057  CD Player","TA877  Answering Machine","CS409  Car Stereo","PC655  Personal Computer"};
	char lookUp[27], *strPtr = NULL;
	int index;
	printf("\tProduct Database\n\n");
	printf("Enter a product number to search for: ");
	scanf("%s",lookUp);
	for (index = 0; index < 5; index++)
	{
		strPtr = strstr(prods[index], lookUp);
		if (strPtr != NULL)break;
	}
	if (strPtr == NULL) printf("No matching product was found.\n");
	else printf("%s\n", prods[index]);
}
