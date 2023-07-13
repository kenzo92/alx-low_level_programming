#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer2(int *buffer, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
