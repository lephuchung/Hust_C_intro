#include <stdio.h>
void main(){
	FILE *f;
	float dToan, dLy, dHoa, dTb;
	// Nhap diem tu ban phim
	printf("Nhap diem thi Toan, Ly Hoa: ");
	scanf("%f%f%f", &dToan, &dLy, &dHoa);
	// Luu vao file van ban
	f  = fopen("my_score.txt", "w");
	fprintf(f, "%f\n%f\n%f\n", dToan, dLy, dHoa);
	fclose(f);
	// Doc du lieu tu file van ban
	f = fopen("my_score.txt", "r");
	fscanf(f, "%f%f%f", &dToan, &dLy, &dHoa);
	fclose(f);
	// Tinh diem trung binh
	dTb = (dToan + dLy + dHoa)/3;
	printf("Diem trung binh: %f", dTb);
}
