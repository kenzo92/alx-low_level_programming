#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char is_whitespace(char);
char is_separator(char c);
char is_sseparator2(char c);
char *cap_string(char *str);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
int _putchar(char c);

#endif /* MAIN_H */

