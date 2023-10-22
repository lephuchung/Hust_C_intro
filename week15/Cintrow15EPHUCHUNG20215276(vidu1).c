#include <stdio.h>

int main(){
	FILE *out;
	out = fopen("Cintrow15LEPHUCHUNG20215276(vidu1).txt","w");
	if(out == NULL){
		perror("Khong the mo tep de ghi.\n");
		return 1;
	}
	fprintf(out,"Hello world of hung");
	fclose(out);
	return 0;
}
