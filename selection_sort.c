#include<stdio.h>

void main() {
	int arraySize, controlVar, controlVarI, controlVarJ, temp;
	printf ( "Enter the size of the array: " );
	scanf ( "%d", &arraySize );
	int array[arraySize];
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		scanf ( "%d", &array[controlVar] );
	}

	printf ( "Unsorted array: \n" );
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		printf ( "%d\t", array[controlVar] );
	}

	for ( controlVarI = 0; controlVarI < arraySize - 1; controlVarI ++ ) {
		for ( controlVarJ = controlVarI + 1; controlVarJ < arraySize; controlVarJ ++ ) {
			if ( array[controlVarI] > array[controlVarJ] ) {
				temp = array[controlVarI];
				array[controlVarI] = array[controlVarJ];
				array[controlVarJ] = temp;
			}
		}
	}

	printf ( "\nSorted array: \n" );
	for ( controlVar = 0; controlVar < arraySize; controlVar ++ ) {
		printf ( "%d\t", array[controlVar] );
	}
	printf ( "\n" );
}
