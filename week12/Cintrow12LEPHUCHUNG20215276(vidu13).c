#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int *p = arr;
	++*p;//a[0]++
	p+=2;//doi dia chi o nho p=arr+2 =>*p=a[2]=3
	printf("%d", *p);
	return 0;
}
