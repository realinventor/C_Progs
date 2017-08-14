#include<stdio.h>

void main() {
	int arraySize, controlVar, controlVarI, controlVarJ, temp;
	printf ( "Enter the size of the array: " );
	scanf ( "%d", &arraySize );
	int array[arraySize];
	printf ( "Enter the array elements: ");
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		scanf ( "%d", &array[controlVar] );
	}
	printf ( "\nUnsorted array: \n" );
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		printf ( "%d\t", array[controlVar]);
	}

	for ( controlVarI = arraySize-1; controlVarI > 0; controlVarI -- ) {
		for ( controlVarJ = 0; controlVarJ < controlVarI; controlVarJ ++ ) {
			if ( array[controlVarJ] > array[controlVarJ + 1] ) {
				temp = array[controlVarJ];
				array[controlVarJ] = array[controlVarJ + 1];
				array[controlVarJ + 1] = temp;
			}
		}
	}

	printf ( "\nSorted array: \n" );
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		printf ( "%d\t", array[controlVar]);
	}
	printf ( "\n" );
}
