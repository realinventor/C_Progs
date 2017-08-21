#include<stdio.h>

char hashTable[100];

int hashFunc(char keyVal) {
	int index = ( keyVal % 29 ) + 1;
	return index;
}

int main() {
	char keyVal[75];
	int controlVar = 0, controlVarJ, index, flag = 0;
	printf( "Enter the Key Value: " );
	scanf( "%s", keyVal );
	while(keyVal[controlVar] != '\0' ) {
		index = hashFunc( keyVal[controlVar] );
		if( keyVal[controlVar] == hashTable[index] ) {
			flag = 1;
			return index;
		}
		else {
			controlVarJ = index + 1;
			while( ( controlVarJ != index ) && ( flag == 0 ) ) {
				if( hashTable[controlVarJ] < 0 ) {
					hashTable[index] = keyVal[controlVar];
				}
				else if( hashTable[controlVarJ] == keyVal[controlVar] ) {
					flag = 1;
					return controlVarJ;
				}
				else {
					if( controlVarJ == 99 ) {
						controlVarJ = 0;
					}
					else {
						controlVarJ ++;
					}
				}
			}
		}
		controlVar ++;
	}
}
