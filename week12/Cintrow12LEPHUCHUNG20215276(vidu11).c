 #include <stdio.h> 
 const int MAX = 4; 
 int main ()
 {
 	char *names[] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"}; 
	int i = 0;
	for ( i = 0; i < MAX; i++) 
	{
		printf("Value of names[%d] = %s\n", i, names[i] );
		printf("Dia chi chu cai dau tien cua ten la: %p\n", (names+i));
		printf("Chu cai dau tien la: %.1s\n", *(names+i));
	}
	return 0;
	//name+i la dia chi cua chu dau tien trong cac phan tu n[i]
	//%.1s se lay 1 chu trong phan tu *(names+i) la names[i]
}      
