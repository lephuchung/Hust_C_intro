#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) {
	int Result = 0;
	int s_length = 0;
	int t_length = 0;
	s_length = strlen(s);
	t_length = strlen(t);
	if(t_length <= s_length) {
		s += s_length - t_length;
		if(0 == strcmp(s, t)) {
			Result = 1;
		}
	}
	return Result;
}

int main(void) {
	char *s1 = "some really long string.";
	char *s2 = "ng.";
	char *s3 = "ng";
	if(strend(s1, s2)) {
		printf("The string (%s) has (%s) at the end.\n", s1, s2);
	} else {
		printf("The string (%s) doesn't have (%s) at the end.\n", s1, s2);
	}
	if(strend(s1, s3)){
		printf("The string (%s) has (%s) at the end.\n", s1, s3);
	} else {
		printf("The string (%s) doesn't have (%s) at the end.\n", s1, s3);
	}
	return 0;
}

