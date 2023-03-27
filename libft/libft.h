/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:25:50 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:25:52 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
void	*ft_memchr(const void *s, int c, unsigned int n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nelem, size_t elsize);
int		ft_isascii(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(char *str, int c);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, size_t l);
int		ft_isprint(int str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_isdigit(int a);
int		ft_isalnum(char a);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t nb);
size_t	ft_strlcat(char *dest, const char *src, size_t nb);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
#endif
