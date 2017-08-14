#include<stdio.h>

int fibbonacciGen(int termNo) {
	if ( termNo <= 1 ) {
		return 0;
	}
	else if ( termNo == 2 ) {
		return 1;
	}
	else {
		return fibbonacciGen ( termNo - 1 ) + fibbonacciGen ( termNo - 2 );
	}
}

void main() {
	int numberOfTerms,controlVar;
	printf ( "Enter the number: " );
	scanf ( "%d" , &numberOfTerms );
	for( controlVar = 1; controlVar <= numberOfTerms; controlVar++ ) {
		printf ( "%d\t" , fibbonacciGen ( controlVar ) );
	}
	printf ( "\n" );
}
