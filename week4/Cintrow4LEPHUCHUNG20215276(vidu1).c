#include <stdio.h>

int main()
{
	int d,m,y,x;
	char ch1,ch2;
	float f;
	scanf("%d", &x);
	printf("%d\n", x);
	scanf("%2d%2d%4d", &d, &m, &y);
	printf("day=%d, month=%d, year=%d\n", d, m, y);
	scanf("%d/%d/%d", &d, &m, &y);
	printf("day=%d, month=%d, year=%d\n", d, m, y);
	scanf(" %c%c", &ch1, &ch2);
	printf("ch1=%c\n", ch1);
	printf("ch2=%c\n", ch2);
	scanf("%f", &f);
	printf("%f\n", f);
}
