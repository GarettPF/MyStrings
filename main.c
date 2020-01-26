/*
	Author: Garett Pascual-Folster
	Date: 12/4/2019
	Description: Program that recreates the string library
				 and string functions
*/

#include "strings.h"

int main(void) {
	FILE* infile = fopen("test.txt", "r"),
		* outfile = fopen("write.txt", "w");

	char* output, str[50], string1[50] = "Hello World";
	int count = 0;

	// my_fgets: gets no more than 10 characters from infile to str
	output = my_fgets(str, 10, infile);
	printf("First 10 characters from infile: %s\n", output);
	CONTINUE;

	// my_fputs: adds a string to a file
	count = my_fputs(str, outfile);
	printf("contents of write.txt: %s\n", str);
	printf("Number of characters written: %d\n", count);
	CONTINUE;

	// my_fgetc: gets the next character from infile
	*output = my_fgetc(infile);
	printf("Next character from infile: %c\n", *output);
	CONTINUE;

	// my_gets: gets a string from stdin
	printf("Enter a string: ");
	my_gets(str);
	printf("The string you entered: %s\n", str);
	CONTINUE;

	// my_puts: outputs a string to stdout
	printf("Enter another string: ");
	output = my_gets(output);
	printf("Using my_puts() to output this string: ");
	count = my_puts(output);
	printf("Number of characters outputted: %d\n", count);
	CONTINUE;

	// my_getchar: gets next character from stdin
	printf("Now enter a character: ");
	*output = my_getchar();
	printf("This is the char you entered: %c\n", *output);
	CONTINUE;

	// my_putchar: outputs a character
	printf("Using my_putchar() to output the same char: ");
	my_putchar(*output);
	printf("\n");
	CONTINUE;
	
	// my_strcpy: copies a string to another string
	printf("This is string1: %s\n", string1);
	printf("Enter a string to copy to string1: ");
	// because of the return key from the last input
	scanf("%c", output);
	output = my_gets(output);
	printf("This is now string1: %s\n", my_strcpy(string1, output));
	CONTINUE;

	// my_strncpy: copies at most n characters to first string
	printf("Enter a string to change string1: ");
	output = my_gets(output);
	printf("Enter how much characters to copy: ");
	scanf("%d", &count);
	printf("This is now string1: %s\n", my_strncpy(string1, output, count));
	CONTINUE;

	// my_strcat: appends a string to another string
	printf("Enter a string to attach to string1: ");
	// because of the return key from the last input
	scanf("%c", output);
	output = my_gets(output);
	printf("This is now string1: %s\n", my_strcat(string1, output));
	CONTINUE;

	// my_strcncat: appends atmost n characters
	printf("Enter a string to attach to string1 again: ");
	output = my_gets(output);
	printf("How much chars to append: ");
	scanf("%d", &count);
	printf("This now the new string1: %s\n", my_strncat(string1, output, count));
	CONTINUE;

	// my_strcmp: compares two strings
	printf("Enter a string for string1: ");
	// return key
	scanf("%c", output);
	my_gets(string1);
	printf("Enter a string for string2: ");
	// return key
	scanf("%c", output);
	output = my_gets(output);
	if (my_strcmp(string1, output) == -1) {
		printf("\"%s\" comes first\n", string1);
	}
	else if (my_strcmp(string1, output) == 1) {
		printf("\"%s\" comes first!\n", output);
	}
	else {
		printf("\"%s\" and \"%s\" are the same\n", string1, output);
	}
	CONTINUE;

	// my_strncmp: compares atmost n characters
	printf("Enter a string for string1: ");
	my_gets(string1);
	printf("Enter a string for string2: ");
	output = my_gets(output);
	printf("Enter the amount of characters to compare: ");
	scanf("%d", &count);
	if (my_strncmp(string1, output, count) == -1) {
		printf("\"%s\" comes first\n", string1);
	}
	else if (my_strncmp(string1, output, count) == 1) {
		printf("\"%s\" comes first!\n", output);
	}
	else {
		printf("\"%s\" and \"%s\" are the same\n", string1, output);
	}
	CONTINUE;

	// my_strlen: returns the amount of chars in the input
	printf("Enter a string to find the length of: ");
	// return key
	scanf("%c", output);
	output = my_gets(output);
	printf("This string is %d characters long\n", my_strlen(output));
	CONTINUE;

	return 0;
}