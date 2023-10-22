#include <stdio.h>

int main()
{
	//nhap vao 2 so, dung if so sanh
	//khai bao bien
	int n, m;
	//nhap du lieu
	printf("Nhap vao so n va m la: ");
	scanf("%d %d", &n, &m);
	//giai thuat va dien dap an
	if(n==m) printf("2 so %d va %d bang nhau\n", n, m);
	if(n!=m) printf("2 so %d va %d khong bang nhau\n", n, m);
	if(n<m) printf("So %d nho hon so %d\n", n, m);
	if(n>m) printf("So %d lon hon so%d\n", n, m);
	if(n>=m) printf("So %d lon hon hoac bang so %d\n", n, m);
	if(n<=m) printf("So %d nho hon hoac bang so %d\n", n, m);
}
