#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

char	*get_next_line(int fd);
void	*ft_bzero(char *s, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s, int c);

#endif
