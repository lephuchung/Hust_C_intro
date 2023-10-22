#include <stdio.h>

int main()
{
	int a,b;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d %d", &a, &b);
	if(a==b) printf("%d bang voi %d\n", a, b);
	if(a!=b) printf("%d khong bang voi %d\n", a, b);
	if(a>b) printf("%d lon hon %d\n", a, b);
	if(a<b) printf("%d nho hon %d\n", a, b);
	if(a<=b) printf("%d nho hon hoac bang %d\n", a, b);
	if(a>=b) printf("%d lon hon hoac bang %d\n", a, b);
}
