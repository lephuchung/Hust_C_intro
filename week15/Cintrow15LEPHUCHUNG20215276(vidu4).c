#include <stdio.h>
#define LINE_LENGTH 80

int main(){
	FILE *fp;
	char line[LINE_LENGTH];
	int count =0;
	fp =fopen("Cintrow15LEPHUCHUNG20215276(vidu4).txt","r");
	while(fgets(line,LINE_LENGTH,fp)!=NULL)
		count++;
	printf("File contains %d lines.\n",count);
	fclose(fp);
	return 0;
}
