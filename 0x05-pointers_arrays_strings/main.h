#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
/*Prototype for putchar function*/

void reset_to_98(int *n);
/*Prototype for update the value of an integer a pointer points to*/

void swap_int(int *a, int *b);
/*Prototype to swap values of integer that have pointers*/

int _strlen(char *s);
/*Prototype for finding length of string*/

void _puts(char *str);
/*Prototype for printing string*/

void print_rev(char *s);
/*Prototype to print string in reverse*/

void rev_string(char *s);
/*Prototype for reverse string*/

void puts2(char *str);
/*Prototype for print every other char of a string*/

void puts_half(char *str);
/*Prototype for printing half of a string*/

void print_array(int *a, int n);
/*Prototype to print n numbers of an array of integers*/

char *_strcpy(char *dest, char *src);
/*Prototype that copies string to a buffer*/
#endif
