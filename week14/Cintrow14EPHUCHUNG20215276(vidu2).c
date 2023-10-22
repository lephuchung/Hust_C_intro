#include <stdio.h>
#include <string.h>

struct myStructure {
	int myNum;
	char myLetter;
	char myString[30];// String
};
int main() {
	struct myStructure s1;
	// Trying to assign a value to the string
//	s1.myString = "Some text";
	strcpy(s1.myString,"some text");
	// Trying to print the value
	printf("My string: %s", s1.myString);
	return 0;
	// Loi khong the gan cho string, dung strcpy de sua
}
