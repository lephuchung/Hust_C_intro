#include "stdio.h"
int giaithua(int n) {
    int gt = 1;
    
    for(int i = 1; i<=n; i++) {
        gt = gt*i;
    }
    return gt;
}
void Pascal(int n, int digit) {
    //j=n-i: gioi han khoang cach so voi le
    //i: la thu tu dong
    //k: thu tu cua 1 phan tu tren 1 dong

    for(int i = 0; i<=n; i++) {
        for(int j = 1; j<=n-i; j++) {
            printf(" ");
        }
        for(int k=0; k<=i; k++) { //number of digits in 1 row
            digit = giaithua(i)/(giaithua(k)*giaithua(i-k));
            printf("%d ", digit);
        }
        printf("\n");
    }
        
}
int main() {
    int n;//number of rows
    int digit;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    Pascal(n,digit);
}
