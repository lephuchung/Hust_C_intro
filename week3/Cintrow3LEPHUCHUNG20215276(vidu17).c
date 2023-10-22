#include <stdio.h>

int main()
{
	//nhap va in bang diem hoc ki
	char ten[101];
	printf("nhap vao ten hoc sinh: ");
	gets(ten);
	float t, v, a, l, h, s, su, dia, gdcd;
	do 
	{
		printf("Nhap vao diem toan: ");
		scanf("%f", &t );
		if(t<0||t>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(t<0||t>10);
	do 
	{
		printf("Nhap vao diem van: ");
		scanf("%f", &v );
		if(v<0||v>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(v<0||v>10);
	do 
	{
		printf("Nhap vao diem anh: ");
		scanf("%f", &a );
		if(a<0||a>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(a<0||a>10);
	do 
	{
		printf("Nhap vao diem li: ");
		scanf("%f", &l );
		if(l<0||l>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(l<0||l>10);
	do 
	{
		printf("Nhap vao diem hoa: ");
		scanf("%f", &h );
		if(h<0||h>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(h<0||h>10);
	do 
	{
		printf("Nhap vao diem sinh: ");
		scanf("%f", &s );
		if(s<0||s>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(s<0||s>10);
	do 
	{
		printf("Nhap vao diem su: ");
		scanf("%f", &su );
		if(su<0||su>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(su<0||su>10);
	do 
	{
		printf("Nhap vao diem dia: ");
		scanf("%f", &dia );
		if(dia<0||dia>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(dia<0||dia>10);
	do 
	{
		printf("Nhap vao diem gdcd: ");
		scanf("%f", &gdcd );
		if(gdcd<0||gdcd>10) printf("diem khong hop le, moi nhap lai\n");
	}
	while(gdcd<0||gdcd>10);
	float tb=(t+v+a+l+h+s+su+dia+gdcd)/9;
	printf("\n");
	printf("Bang diem hoc ki 1 cua %s:\n", ten);
	printf("toan \t-\t %30.1f\n", t);
	printf("van \t-\t %30.1f\n", v);
	printf("anh \t-\t %30.1f\n", a);
	printf("li \t-\t %30.1f\n", l);
	printf("hoa \t-\t %30.1f\n", h);
	printf("sinh \t-\t %30.1f\n", s);
	printf("su \t-\t %30.1f\n", su);
	printf("dia \t-\t %30.1f\n", dia);
	printf("gdcd \t-\t %30.1f\n", gdcd);
	printf("diem trung binh la:\t\t\t %6.1f\n", tb);
	if(tb<3) printf("thanh tich hoc tap: %30s", "truot");
	if(3<=tb&&tb<5) printf("thanh tich hoc tap:\t\t\t %6s", "kem");
	if(5<=tb&&tb<6) printf("thanh tich hoc tap:\t\t\t %6s", "trung binh");
	if(6<=tb&&tb<8) printf("thanh tich hoc tap:\t\t\t %6s", "kha");
	if(8<=tb&&tb<9) printf("thanh tich hoc tap:\t\t\t %6s", "gioi");
	if(9<=tb&&tb<=10) printf("thanh tich hoc tap:\t\t\t %6s", "xuat sac");
}
