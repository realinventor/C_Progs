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

	for ( controlVarI = 1; controlVarI < arraySize; controlVarI ++ ) {
		for ( controlVarJ = controlVarI; controlVarJ > 0; controlVarJ -- ) {
			if ( array[controlVarJ - 1] > array[controlVarJ] ) {
				temp = array[controlVarJ - 1];
				array[controlVarJ - 1] = array[controlVarJ];
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
