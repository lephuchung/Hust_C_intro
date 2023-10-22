#include <stdio.h>

int main()
{
	int m1, d1, y1, m2, d2, y2;
	printf("Enter a date in the form mm-dd-yyyy: ");
	scanf("%d%*c%d%*c%d", &m1, &d1, &y1);
	printf("month=%d, day=%d, year=%d\n", m1, d1, y1);
	printf("Enter a date in the form mm/dd/yyyy: ");
	scanf("%d%*c%d%*c%d", &m2, &d2, &y2);
	printf("month=%d, day=%d, year=%d\n", m2, d2, y2);
}
