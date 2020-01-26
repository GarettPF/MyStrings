#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MY_EOF -1
#define CONTINUE system("pause"); system("cls")

/*
Function: my_fgets;
Description: Reads at most one less than the number of
	characters specified by n, in the array pointed to by s,
	from the input pointed to by stream. stops after 
	ecountering a newline or end of file;
	@param *s				string to add to;
	@param n				limit on characters;
	@param *stream			file stream;
	@return					address of s;
*/
char* my_fgets(char* s, int n, FILE* stream);

/*
Function: my_fputs;
Description: Writes s to the output specified by stream.
	If the function is successful, then it returns the number
	of characters written to the output; otherwise EOF;
	@param *s				string to output;
	@param *stream			output file stream;
	@return					number of characters written || EOF;
*/
int my_fputs(const char* s, FILE* stream);

/*
Function: my_fgetc;
Description: Reads the next character from the input
	pointed to by stream;
	@param *stream			input FILE stream;
	@return					ASCII value of character read;
*/
int my_fgetc(FILE* stream);

/*
Function: my_gets;
Description: Reads characters from stdin to an array
	until new line is encountered;
	@param *s				string to input to;
	@return					address of s;
*/
char* my_gets(char* s);

/*
Function: my_puts;
Description: Writes the string pointed to by s to stdout
	then appends newline to the output;
	@param *s				string to output;
	@return					number of chars wrtitten;
*/
int my_puts(const char* s);

/*
Function: my_getchar;
Description: Returns the ascii value of the next
	character read from stdin;
	@param void;
	@return					ASCII value of read character;
*/
int my_getchar(void);

/*
Function: my_putchar;
Description: Writes character c to stdout;
	@param c				character to output;
	@return					ASCII value of c;
*/
int my_putchar(int c);

/*
Function: my_strcpy;
Description: Copies all characters in the array pointed
	to by source into the array pointed to by destination;
	@param *destination		pointer to write to;
	@param *sourc			source of characters;
	@return					starting address of destination;
*/
char* my_strcpy(char* destination, const char* source);

/*
Function: my_strncpy;
Description: same thing as my_strcpy but has a limit
	of n or till the end of source is encountered;
	@param *destination		pointer to write to;
	@param *source			source of characters;
	@param n				limits to copy;
	@return					starting address of destination;
*/
char* my_strncpy(char* destination, const char* source, int n);

/*
Function: my_strcat;
Description: appends a copy of the string pointed to by 
	source to the end of the string pointed to by
	destination.
	@param *destination		pointer to write to;
	@param *source			string to append;
	@return					starting address of destination;
*/
char* my_strcat(char* destination, const char* source);

/*
Function: my_strncat;
Destination: same thing as my_strcat but appends no
	more than n characters from the string pointed to by source;
	@param *destination		pointer to write to;
	@param *source			string to append;
	@param n				limit to append;
	@return					starting address of destination;
*/
char* my_strncat(char* destination, const char* source, int n);

/*
Function: my_strcmp;
Destination: compares the string pointed to by s1 to
	the string pointed to by s2. if s1 comes before s2 in
	dictionary ordering, then -1 is return. otherwise 1.
	if s1 and s2 are the same then 0 is returned;
	@param *s1				first string to compare;
	@param *s2				second string to compare;
	return					the results of the comparison;
*/
int my_strcmp(const char* s1, const char* s2);

/*
Function: my_strcmp;
Destination: compares the string pointed to by s1 to
	the string pointed to by s2 but no more then n characters
	if s1 comes before s2 in dictionary ordering, 
	then -1 is return. otherwise 1. if s1 and s2 
	are the same then 0 is returned;
	@param *s1				first string to compare;
	@param *s2				second string to compare;
	@param n				limit to compare;
	return					the results of the comparison;
*/
int my_strncmp(const char* s1, const char* s2, int n);

/*
Function: my_strlen;
Description: returns the length of the string pointed to
	by s and does not include the null character;
	@param *s				string to get length from;
	@return					length of s;
*/
int my_strlen(const char* s);