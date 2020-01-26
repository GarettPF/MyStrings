#include "strings.h"

char* my_fgets(char* s, int n, FILE* stream) {
	int count = 0, c = 0;

	while (n--) {
		// if not EOF: -1 or '\n': 10
		if (fscanf(stream, "%1c", &c) != MY_EOF && c != 10) { 
			*(s + count++) = c;
		}
		else { n = 0; }
	}
	*(s + count) = '\0';

	return s;
}

int my_fputs(const char* s, FILE* stream) {
	int count = 0;

	if (stream == NULL) {
		return MY_EOF;
	}

	while (*(s + count) != 0) {
		fprintf(stream, "%c", *(s + count++));
	}
	fprintf(stream, "\n");

	return --count;
}

int my_fgetc(FILE* stream) {
	char character = 0;
	if (fscanf(stream, "%1c", &character) == MY_EOF) {
		character = MY_EOF;
	}

	return character;
}

char* my_gets(char* s) {
	int count = 0;
	do {
		scanf("%c", s + count);
	} while (*(s + count++) != '\n');
	*(s + --count) = '\0';

	return s;
}

int my_puts(const char* s) {
	int count = 0;

	while (*(s + count) != '\0') {
		printf("%c", *(s + count++));
	}
	printf("\n");

	return count;
}

int my_getchar(void) {
	int character = 0;
	// reads characters and new lines
	if (scanf("%c", &character)) { // if successful
		return character;
	}
	else { // on error reading
		return MY_EOF;
	}
}

int my_putchar(int c) {
	printf("%c", c);
	return c;
}

char* my_strcpy(char* destination, const char* source) {
	char* dest_ptr = destination, temp = 0;

	do {
		*(destination++) = *source;
	} while (*(source++)); // stop when src = 0

	return dest_ptr;
}

char* my_strncpy(char* destination, const char* source, int n) {
	int count = n;
	char* dest_ptr = destination;

	while (*source && n--) {
		*(destination++) = *(source++);
	}
	*destination = 0;

	return dest_ptr;
}

char* my_strcat(char* destination, const char* source) {
	char* return_ptr = destination;

	// go to the '\0' of destination
	while (*destination) { destination++; }
	// add source to end
	do {
		*(destination++) = *source;
	} while (*(source++));

	return return_ptr;
}

char* my_strncat(char* destination, const char* source, int n) {
	char* return_ptr = destination;

	// go to the '\0' of destination
	while (*destination) { destination++; }
	// add n amount to end
	while (*source && n--) {
		*(destination++) = *(source++);
	}
	*destination = 0;

	return return_ptr;
}

int my_strcmp(const char* s1, const char* s2) {
	while (*s1 && *s2) {
		if (*s1 < * s2) {
			return -1;
		}
		else if (*(s1++) > *(s2++)) {
			return 1;
		}
	}

	if (!*s1 && !*s2) {
		return 0;
	}
	else if (!*s1) {
		return -1;
	}
	else {
		return 1;
	}
}

int my_strncmp(const char* s1, const char* s2, int n) {
	while (*s1 && *s2 && --n) {
		if (*s1 < *s2) {
			return -1;
		}
		else if (*(s1++) > * (s2++)) {
			return 1;
		}
	}

	if ((!*s1 && !*s2) || (*s1 == *s2)){
		return 0;
	}
	else if (*s1 < *s2) {
		return -1;
	}
	else {
		return 1;
	}
}

int my_strlen(const char* s) {
	int count = 0;
	while (*(s + count++)) {}
	return --count;
}