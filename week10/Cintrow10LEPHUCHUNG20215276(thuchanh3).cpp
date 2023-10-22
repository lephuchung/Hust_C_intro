#include <stdio.h>

int main()
{
	int i, n, A[10];
	printf("Nhap so phan tu trong day (n<=10): ");
	scanf("%d",&n);
	printf("Nhap cac phan tu trong day:\n");
	for(i=0; i<n; i++) 	
	{
	printf("Phan tu thu %d: ", i+1);
	scanf("%d",&A[i]);
	}
	printf("Day so sau khi dao lai:\n");
	for(i=n-1; i>=0; i--)
	printf("%5d",A[i]);
	return 0;
}
