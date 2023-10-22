#include <stdio.h>
#include <string.h>

typedef struct {
	int thang;
	int nhietDoThapNhat;
	int nhietDoCaoNhat;
	int doAm;
} thoitiet;

int main() {
	FILE *f1;
	thoitiet tt[365];
	int soNgay, max, min, i, mmax, mmin, n, ngay;
	double tongNhietDo, tongDoAm;
	f1 = fopen("thoitiet.txt", "r");
	i = 0;
	while (fscanf(f1, "%d/%d %d-%d %d", &ngay, &tt[i].thang, &tt[i].nhietDoThapNhat, &tt[i].nhietDoCaoNhat, &tt[i].doAm) == 5) {
		i++;
	}
	fclose(f1);
	n = i;
	soNgay = 1;
	tongNhietDo = (tt[0].nhietDoCaoNhat + tt[0].nhietDoThapNhat) * 1.0 / 2;
	tongDoAm = tt[0].doAm;
	max = 0; min = 100;
	for (i = 1; i < n; i++) {
		if (tt[i].thang == tt[i - 1].thang) {
			soNgay++;
			tongNhietDo += (tt[i].nhietDoCaoNhat + tt[i].nhietDoThapNhat) * 1.0 / 2;
			tongDoAm += tt[i].doAm;
		} else {
			printf("Nhiet do trung binh cua thang %d la: %.2lf\n", tt[i - 1].thang, tongNhietDo / soNgay);
			if ((tongDoAm / soNgay) < min) {
				min = tongDoAm / soNgay;
				mmin = tt[i - 1].thang;
			}
			if ((tongDoAm / soNgay) > max) {
				max = tongDoAm / soNgay;
				mmax = tt[i - 1].thang;
			}
			soNgay = 1;
			tongNhietDo = (tt[i].nhietDoCaoNhat + tt[i].nhietDoThapNhat) * 1.0 / 2;
			tongDoAm = tt[i].doAm;
		}
	}
	printf("Nhiet do trung binh cua thang %d la: %.2lf\n", tt[n - 1].thang, tongNhietDo / soNgay);
	if ((tongDoAm / soNgay) < min) {
		min = tongDoAm / soNgay;
		mmin = tt[n - 1].thang;
	}
	if ((tongDoAm / soNgay) > max) {
		max = tongDoAm / soNgay;
		mmax = tt[n - 1].thang;
	}
	printf("Thang %d la thang kho hanh nhat\n", mmin);
	printf("Thang %d la thang am uot nhat\n", mmax);
	return 0;
}
