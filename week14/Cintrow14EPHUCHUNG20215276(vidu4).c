#include <stdio.h>
struct myStructure {
	int myNum;
	char myLetter;
	char myString[30];
};
int main(){
	// Create a structure variable and assign values to it
	struct myStructure s1 ={13,'B',"Some text"};
	// Create another structure variable
	struct myStructure s2;
	// Copy s1 values to s2
	s2 = s1;
	// Print values
	printf("%d %c %s",s2.myNum,s2.myLetter,s2.myString);
	return 0;
	//co the copy cac cau truc bang lenh gan 
}
