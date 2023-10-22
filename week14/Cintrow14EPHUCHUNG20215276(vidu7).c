#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[20];
	int age;
	float grade;
}student_t;
void nhapdulieu(student_t *a){
	printf("Nhap vao ten sinh vien 1: ");
	fgets((*a).name,21,stdin);
	(*a).name[strlen((*a).name)-1]='\0';
	fflush(stdin);
	printf("Nhap vao tuoi cua sinh vien 1: ");
	scanf("%d", &(*a).age);
	fflush(stdin);
	printf("Nhap vao lop cua sinh vien 1: ");
	scanf("%f", &(*a).grade);
	fflush(stdin);
}
int main(){
	struct student sv1 = {"Le Phuc Hung", 19, 1};
	printf("Nhap vao ten sinh vien 1: ");
	fgets(sv1.name,21,stdin);
	sv1.name[strlen(sv1.name)-1]='\0';
	fflush(stdin);
	printf("Nhap vao tuoi cua sinh vien 1: ");
	scanf("%d", &sv1.age);
	fflush(stdin);
	printf("Nhap vao lop cua sinh vien 1: ");
	scanf("%f", &sv1.grade);
	fflush(stdin);
	struct student sv2;
	sv2 = sv1;
	printf("Nhap vao ten sinh vien 2: ");
	fgets(sv2.name,21,stdin);
	sv2.name[strlen(sv2.name)-1]='\0';
	fflush(stdin);
	printf("Nhap vao tuoi cua sinh vien 2: ");
	scanf("%d", &sv2.age);
	fflush(stdin);
	printf("Nhap vao lop cua sinh vien 2: ");
	scanf("%f", &sv2.grade);
	fflush(stdin);
	//in lai 
	printf("Thong tin sinh vien 1: %s %d %f\n", sv1.name, sv1.age, sv1.grade);
	printf("Thong tin sinh vien 2: %s %d %f\n", sv2.name, sv2.age, sv2.grade);
	//con tro 
	struct student *psv = &sv1;
	printf("Nhap vao ten sv 1: ");
	fgets((*psv).name, 21, stdin);
	(*psv).name[strlen((*psv).name)-1]='\0';
	fflush(stdin);
	printf("Nhap vao tuoi sv 1: ");
	scanf("%d", &(*psv).age);
	fflush(stdin);
	printf("Nhap vao lop sv 1: ");
	scanf("%f", &(*psv).grade);
	fflush(stdin);
	printf("Thong tin sinh vien 1: %s %d %f\n", sv1.name, sv1.age, sv1.grade);
	printf("Thong tin sinh vien 2: %s %d %f\n", sv2.name, sv2.age, sv2.grade);
	nhapdulieu(&sv1);
	printf("Thong tin sinh vien 1: %s %d %f\n", sv1.name, sv1.age, sv1.grade);
	printf("Thong tin sinh vien 2: %s %d %f\n", sv2.name, sv2.age, sv2.grade);
}
