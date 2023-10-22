#include <stdio.h>

struct item 
{
	char itemName[30];
	int qty;
	float price;
	float amount;
};

int main()
{
	struct item itm; /*declare variable of structure item*/
	struct item* pItem; /*declare pointer of structure item*/
	pItem = &itm; /*pointer assignment - assigning address of itm to pItem*/
	/*read values using pointer*/
	printf("Enter product name: ");
	gets(pItem->itemName);
	printf("Enter price:");
	scanf("%f", &pItem->price);
	printf("Enter quantity: ");
	scanf("%d", &pItem->qty);
	/*calculate total amount of all quantity*/
	pItem->amount = (float)pItem->qty * pItem->price;
	/*print item details*/
	printf("\nName: %s", pItem->itemName);
	printf("\nPrice: %f", pItem->price);
	printf("\nQuantity: %d", pItem->qty);
	printf("\nTotal Amount: %f", pItem->amount);
	return 0;
}

