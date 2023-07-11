#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
