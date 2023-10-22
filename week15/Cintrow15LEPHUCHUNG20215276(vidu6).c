#include <stdio.h>
int main(){
	FILE *fp;
	int c[3]={3,4,5};
	int i;
	fp =fopen("file_nhi_phan_2.dat","wb");
	fwrite(c,3,sizeof(int),fp);
	fclose(fp);
}
