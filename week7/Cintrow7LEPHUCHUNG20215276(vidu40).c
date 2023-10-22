#include <stdio.h>

int giaithua(int n) {
    int gt = 1;
    int i=1;
    for( i = 1; i<=n; i++) {
        gt = gt*i;
    }
    return gt;
}
void Pascal(int n, int gt) {
	int i,j,k;
    for(i = 0; i<=n; i++) 
	{
        for(k = 1; k<=n-i; k++) 
		{
            printf(" ");
        }
        for(j=0; j<=i; j++) 
		{ 
            gt = giaithua(i)/(giaithua(j)*giaithua(i-j));
            printf("%d ", gt);
        }
        printf("\n");
    }
        
}
int main() 
{
	//tam giac pascal
	//khai bao bien
    int n;
    int gt;
    //nhap du lieu
    do
    {
    	printf("Nhap chieu cao cua tam giac (0<n): ");
    	scanf("%d", &n);
    	if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
    //goi ham va dien dap an
    Pascal(n,gt);
}
