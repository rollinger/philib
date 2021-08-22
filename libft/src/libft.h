/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:19:18 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 22:45:58 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define LOWUPDIFF 32
# define STDOUT_FD 1
# define NTOA_MAX_CHAR 1000
# define DECIMALBASE "0123456789"
# define HEXBASE "0123456789abcdef"
# define OCTALBASE "01234567"
# define BINARYBASE "01"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Basic character based functions <libchar> */
int		ft_isupper(int c); /* TestCase: ...*/
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_ctos(int c);
/* Basic memory based functions, malloc and swaps <libmem> */
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_swapi(int *a, int *b);
void	ft_swapc(char *a, char *b);
void	ft_swapb(void *a, void *b);
/* Basic string-based functions <libstr>*/
size_t	ft_strlen(const char *s);
size_t	ft_strclen(const char *s, char c);
size_t	ft_strslen(const char *s, const char *nc);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strset(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_subpstr(char const *s, char const *start, char const *end);
char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_lpad(char *str, size_t size, int c);
char	*ft_rpad(char *str, size_t size, int c);
/* Basic output functions */
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr(int n);
void	ft_puts(int n, ...);
/* Converter functions */
int		ft_atoi(const char *str);
char	*ft_untoa_base(unsigned long long int nbr, char *result, char *base);
char	*ft_ntoa_base(long long int nbr, char *result, char *base);
char	*ft_itoa(long long int nbr);
char	*ft_uitoa(unsigned long long int nbr);
char	*ft_itox(long long int nbr);
char	*ft_uitox(unsigned long long int nbr);
char	*ft_itoo(long long int nbr);
char	*ft_uitoo(unsigned long long int nbr);
char	*ft_itob(long long int nbr);
char	*ft_uitob(unsigned long long int nbr);
/* Basic number based functions */
size_t	ft_ndigits(long long int n);
int		ft_add(int n, ...);
int		ft_sub(int n, ...);
void	ft_divmod(int a, int b, int *div, int *mod);
void	ft_inline_divmod(int *a, int *b);
int		ft_pwr(int nb, int power);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
/* Basic linked list based functions */
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
