#include <stdio.h>

struct EmpAddress{
	char *ename;
	char stname[20];
	int pincode;
};
int main(){ 
	struct EmpAddress employee = {"John Alter","Court Street \n",654134}; 
	struct EmpAddress *pt = &employee;
	printf("\n\n Pointer : Show the usage of pointer to structure :\n");
	printf("----------------------------------------\n");
	printf(" %s from %s \n\n",pt->ename,(*pt).stname);
	return 0;
}
