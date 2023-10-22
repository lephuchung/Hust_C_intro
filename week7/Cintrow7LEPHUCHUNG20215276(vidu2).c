#include <stdio.h>
#include <string.h>
int main()
{
	char s[10] = "ABCDE"; 
	int i, j, c; 
	for (i=0, j=strlen(s)-1; i<j; i++,j--)
	{ 
		c = s[i];
		s[i] = s[j];
		s[j] = c; 
	}
	printf("%s", s);
}
