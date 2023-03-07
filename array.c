#include <stdio.h>
#include <stdlib.h>

int main()
{
	int luckyNumbers[] = {4, 8, 2, 23};
	luckyNumbers[1] = 52; // Changing an element of an array

	printf("%d", luckyNumbers[1]); // Accessing an element in array

	/* Or u can declare it empty */

	/*
	Maksudnya perlu ngatur memori tuh yah kayak harus didefinisikan dulu semuanya 
	terpisah dari apakah perlu banyak atau sedikit
	*/

	int whatNumbers[10];
	char phrase[10];

	return 0;
}
