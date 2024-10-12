#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
int	ft_strlen(const char * restrict str);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_toupper(char *str);
char *ft_tolower(char *str);
int	ft_strlen(const char * str);
int ft_isprint(int c);
int ft_isdigit(int x);
int ft_isascii(int c);
int ft_isalpha(char c);
int ft_isalnum(int x);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char * ft_strrchr(const char *s, int c);
char * ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
void * ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
#endif