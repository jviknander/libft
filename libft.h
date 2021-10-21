#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*
typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
};*/
// colocar os prototipos das funçoes, ver se há alguma ordem necessária

int	ft_isprint(int	c);
int	ft_isalpha(int	c);
int	ft_isalnum(int	c);
int	ft_isdigit(int	c);
int	ft_isascii(int	c);
int	ft_toupper(int	c);
int	ft_tolower(int	c);
int	ft_atoi(char *str);
int	ft_strlen(char	*str);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strncat(char *dest, char *src, unsigned int n);

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(const char *s1, const  char *s2, size_t n);

void	bzero(void *s, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
