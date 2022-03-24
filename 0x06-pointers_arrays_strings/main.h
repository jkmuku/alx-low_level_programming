#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
/*Prototype for putchar function*/

char *_strcat(char *dest, char *src);
/*Prototype to concatenate strings*/

char *_strncat(char *dest, char *src, int n);
/*Prototype to concatenate using at most n bytes from src*/

char *_strncpy(char *dest, char *src, int n);
/*Prototype to copy string*/

int _strcmp(char *s1, char *s2);
/*Prototype to compare strings*/

void reverse_array(int *a, int n);
/*Prototype to reverse content of an array of integers*/

char *string_toupper(char *);char *string_toupper(char *);
/*Prototype that changes lowercase strings to uppercase*/

char *cap_string(char *);
/*Prototype to capitalise all words of a string*/

char *leet(char *);
/*Prototype for string encryption*/
#endif
