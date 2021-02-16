#include <stdio.h> 
#include <stdlib.h> // For exit() 

int main() 
{ 
	FILE *file1, *file2; 
	char filename[100], ch; 

	printf("Enter the filename to open for reading \n"); 
	scanf("%s", filename); 

	// Open one file for reading 
	file1 = fopen(filename, "r"); 
	if (file1 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	printf("Enter the filename to open for writing \n"); 
	scanf("%s", filename); 

	// Open another file for writing 
	file2 = fopen(filename, "w"); 
	if (file2 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	// Read contents from file 
	
	while ((ch = fgetc(file1)) != EOF) 
	{ 
		fputc(ch, file2); 
	} 

	printf("file copied successfully"); 

	fclose(file1); 
	fclose(file2); 
	return 0; 
}

