#include<stdio.h>

void main() {
	int number, factorial = 1, controlVar;
	printf ( "Enter the number: ");
	scanf ( "%d" , &number );
	for ( controlVar = 1; controlVar <= number; controlVar ++ ) {
		factorial = factorial * controlVar;
	}
	printf ( "Factorial of %d is %d\n", number, factorial );
}
//wow