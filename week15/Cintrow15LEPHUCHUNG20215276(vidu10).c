#include <stdio.h>

int main(){
	FILE *fp;
	fp =fopen("fb2.dat","ab");
	if(fp ==NULL){
		perror("Khong mo duoc file\n");
		return 1;
	} 
	int n = 6;
	fwrite(&n,1,sizeof(int),fp);
	fclose(fp);
	return 0;
}
