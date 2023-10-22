#include <stdio.h>
#include <string.h>

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
	// Change s2 values
	s2.myNum =30;
	s2.myLetter ='C';
	strcpy(s2.myString,"Something else");
	// Print values
	printf("%d %c %s\n",s1.myNum,s1.myLetter,s1.myString);
	printf("%d %c %s\n",s2.myNum,s2.myLetter,s2.myString);
	return 0;
	//mot cau truc co the dinh nghia nhieu lan de thay doi du lieu
}
