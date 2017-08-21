#include<stdio.h>

char hashTable[100];

int hashFunc(char keyVal) {
	int index = ( keyVal % 99 ) + 1;
	return index;
}

int main() {
	char keyVal[75];
	int i=0, controlVar = 0, controlVarJ, index;
	printf( "Enter the Key Value: " );
	scanf( "%s", keyVal );
	while(keyVal[controlVar] != '\0' ) {
		index = hashFunc( keyVal[controlVar] );
		if( keyVal[controlVar] == hashTable[index] ) {
			printf("%d", index );
		}
		else {
			controlVarJ = index + 1;
			while( ( controlVarJ != index ) ) {
				if( hashTable[controlVarJ] <= 0 ) {
					hashTable[controlVarJ] = keyVal[controlVar];
				}
				else if( hashTable[controlVarJ] == keyVal[controlVar] ) {
					printf("%d", controlVarJ);
				}

				if( controlVarJ >= 99 ) {
					controlVarJ = 0;
				}
				else {
					controlVarJ ++;
				}
			}
		}
		controlVar ++;
	}
	while( hashTable[i] != '\0' ) {
		printf( "%c", hashTable[i] );
		i++;
	}
	printf( "\n" );
}
