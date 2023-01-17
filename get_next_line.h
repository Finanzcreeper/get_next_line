/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:45:34 by nreher            #+#    #+#             */
/*   Updated: 2023/01/17 11:46:14 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_renul(char **rest, char **temps, char *out);
char	*ft_loopend(char **temps, char **rest, char *out);
void	ft_fremp(char **temp);
int		ft_strlen(const char *str);
int		ft_has_nl(const char *s);
char	*ft_stranl(const char *s);
char	*ft_strbnl(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t nmemb, size_t size);
#endif
