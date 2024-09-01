
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_atoi(const char *str);
void bzero(void *s, size_t n);
int ft_isalnum (int ar);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int arg);
int ft_isprint(int arg);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest_str, const void *src_str, size_t n);
void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void *ft_memset (void *str, int c, size_t n);
char *ft_strchr(char *str, int search_str);
size_t ft_strlcat( char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dest, char *src, size_t dstsizeof);
size_t ft_strlen(const char *str);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *dest, const char *src, size_t len);
char *ft_strrchr(char *str, int search_str);
int ft_tolower(int ch);
int ft_toupper(int ch);


#endif