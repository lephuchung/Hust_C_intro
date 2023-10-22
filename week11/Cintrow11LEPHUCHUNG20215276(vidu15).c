#include <stdio.h>
int main()
{
	int a = 12;
	void *ptr = &a;
	printf("%d", *(int *)ptr);
	getchar();
	return 0;
//	Mot con tro void là mot con tro co the tro den moi loai bien. Nhung neu muon in gia tri cua bien ma con tro tro den thi phai thay doi kieu cua con tro giong voi kieu du lieu cua bien ma no tro den.
}
