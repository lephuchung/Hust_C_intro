#include <stdio.h>

struct myStructure {
	int myNum;
	char myLetter;
};
int main() {
	// Create a structure variable of myStructure called s1
	struct myStructure s1;
	struct myStructure s2;
	// Assign values to members of s1
	s1.myNum = 13;
	s1.myLetter = 'B';
	// Assign values to members of s2
	s2.myNum = 20;
	s2.myLetter = 'C';
	// Print values
	printf("My number 1: %d\n", s1.myNum);
	printf("My letter 1: %c\n", s1.myLetter);
	printf("My number 2: %d\n", s2.myNum);
	printf("My letter 2: %c\n", s2.myLetter);
	return 0;
	//s1.myNum se in ra thuoc tinh myNum cua cau truc myStructure s1
	//s1.myLetter se in ra thuoc tinh myLetter cua cau truc myStructure s1
	//s2.myNum se in ra thuoc tinh myNum cua cau truc myStructure s2
	//s2.myLetter se in ra thuoc tinh myLetter cua cau truc myStructure s2
} 
