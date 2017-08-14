#include<stdio.h>

void main() {
	int arraySize, searchElement, controlVar, controlBegin, controlMiddle, controlEnd, flag = 0;
	printf("Enter the size of the array: ");
	scanf("%d",&arraySize);
	int array[arraySize];
	printf("Enter the array elements(should be sorted in ascending order): \n");
	for(controlVar = 0; controlVar < arraySize; controlVar++) {
		scanf("%d",&array[controlVar]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&searchElement);

	controlBegin = 0;
	controlEnd = arraySize - 1;

	while( (controlEnd >= controlBegin) ) {
		controlMiddle = ( controlBegin + controlEnd ) / 2;
		if(searchElement == array[controlMiddle]) {
			printf("Element(%d)found at position %d\n",searchElement,controlMiddle);
			flag = 1;
			break;
		}
		else if(searchElement < array[controlMiddle]) {
			controlEnd = controlMiddle - 1;
		}
		else if(searchElement > array[controlMiddle]) {
			controlBegin = controlMiddle + 1;
		}
	}
	if(flag = 0) {
		printf("Element(%d) was not found\n",searchElement);
	}
}
