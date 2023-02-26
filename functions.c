#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer (ptr) will set aside the heaping location 
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	// Dynamically allocate memory ("heap) using the malloc(). what is allocated is the array 
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully heaped
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}
