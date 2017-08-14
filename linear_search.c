#include<stdio.h>

void main() {
	int arraySize,controlVar,searchElement,flag=0;
	printf("Enter the size of the array: ");
	scanf("%d",&arraySize);
	int array[arraySize];
	printf("Enter the elements in the array: \n");
	for(controlVar=0;controlVar<arraySize;controlVar++) {
		scanf("%d",&array[controlVar]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&searchElement);
	for(controlVar=0;controlVar<arraySize;controlVar++) {
		if(array[controlVar] == searchElement) {
			printf("Element(%d) found at position %d\n",searchElement,controlVar);
			flag = 1;
		}
	}
	if(flag == 0) {
		printf("Element was not found\n");
	}
}
