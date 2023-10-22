#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	char name[100];
	int soLuong;
	double donGia;
} hangHoa;

int main() {
	FILE *f1;
	int i, n, tongSoHang = 0;
	hangHoa hh;
	double tongSoTien = 0;
	bool check;
	i = 0;
	f1 = fopen("HangHoa.dat", "wb");
	while (1) {
		printf("Hang hoa thu %d\n", ++i);
		fflush(stdin);
		printf("Ten cua hang hoa: "); fgets(hh.name, 100, stdin); hh.name[strlen(hh.name) - 1] = '\0';
		if (strcmp(hh.name, "***") == 0) {
			break;
		}
		printf("So luong: "); scanf("%d", &hh.soLuong);
		tongSoHang += hh.soLuong;
		printf("Don gia: "); scanf("%lf", &hh.donGia);
		tongSoTien += hh.soLuong * hh.donGia;
		fwrite(&hh, sizeof(hangHoa), 1, f1);
	}
	fclose(f1);
	printf("Danh sach hang hoa:\n");
	f1 = fopen("HangHoa.dat", "rb");
	i = 0;
	printf("%-8s%-30s%-15s%-15s%-15s\n", "STT", "Ten hang", "So luong", "Don gia", "Thanh tien");
	while (fread(&hh, sizeof(hangHoa), 1, f1) > 0) {
		printf("%-8d%-30s%-15d%-15.3f%-15.3lf\n", ++i, hh.name, hh.soLuong, hh.donGia, hh.soLuong * hh.donGia);
	}
	printf("-----------------------------------------------------------------------------------\n");
	printf("%-38s%-30s%-15s\n", "Tong ket", "Tong so hang", "Tong so tien");
	printf("%-38s%-30d%-15.3lf\n", "", tongSoHang, tongSoTien);
	rewind(f1);
	printf("Tim kiem theo so luong\n");
	printf("Nhap so luong: "); scanf("%d", &n);
	i = 0;
	check = 0;
	while (fread(&hh, sizeof(hangHoa), 1, f1) > 0) {
		if (hh.soLuong == n) {
			printf("%-8d%-30s%-15d%-15.3f%-15.3lf\n", ++i, hh.name, hh.soLuong, hh.donGia, hh.soLuong * hh.donGia);
			check = 1;
		}
	}
	if (!check) {
		printf("Khong tim thay\n");
	}
	return 0;
}

