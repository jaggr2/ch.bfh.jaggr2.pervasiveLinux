/* program 2.1 
Write a program that allows you to enter two strings s1 and s2. This program contains a function that returns

the position of the occurrence of string s2 in string s1, and -1 otherwise.
*/
#include <stdio.h>
#include <string.h>

#define BUFFERSIZE 1024

int main(void) {
	printf("Hello Roger\n");

	char pString1[BUFFERSIZE];
	char pString2[BUFFERSIZE];

	printf("type a long string: ");
	if (fgets( pString1, BUFFERSIZE, stdin ) != NULL) {
		size_t ln = strlen(pString1) - 1;
		if (pString1[ln] == '\n') {
			pString1[ln] = '\0';
		}
		
		printf("read: %s\n", pString1);
	} else {
		fprintf(stderr, "Nothing read from standard input....\n");
		goto ende;
	}

	printf("the string to search in the long string: ");
	if (fgets( pString2, BUFFERSIZE, stdin ) != NULL) {
		size_t ln = strlen(pString2) - 1;
		if (pString2[ln] == '\n') {
			pString2[ln] = '\0';
		}

		printf("read: %s\n", pString2);
	} else {
		fprintf(stderr, "Nothing read from standard input....\n");
		goto ende;
	}
	

	char *s = strstr(pString1, pString2);
	if (s != NULL)
	{
		// index in buff can be found by pointer subtractio
		printf("Found string at zero based index = %d\n", *s - *pString1);
	}
	else
	{
		printf("String not found\n");
	}
		
	// cleanup                                                       
	ende:                                                          
	return 0;
}

