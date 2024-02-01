#include "../inc/get_next_line.h"

//This function removes the first line of text from the buffer
//and shifts the remaining content to the beginning
//of the buffer. The remainder of the buffer is then null-terminated.
void	remove_first_line_from_buffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	while (buffer[i] && buffer[++i])
		buffer[j++] = buffer[i];
	while (buffer[j])
		buffer[j++] = '\0';
}

//This function uses null terminators ('\0') to remove
//everyting after the first newline character ('\n') in next_line
//It also shifts the buffer to the left,
//removing everything before the newline character ('\n')
//and null terminating the rest ('\0')
void	adjust_line_and_buffer(char *next_line, char *buffer)
{
	int	i;

	i = 0;
	while (next_line[i] && next_line[i] != '\n')
		i++;
	while (next_line[i] && next_line[++i])
		next_line[i] = '\0';
	remove_first_line_from_buffer(buffer);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			characters_read;
	char		*next_line;

	characters_read = 1;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (ft_bzero(buffer, BUFFER_SIZE));
	next_line = ft_strjoin(NULL, buffer);
	while (!(ft_strchr(next_line, '\n')) && characters_read > 0)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		characters_read = read(fd, buffer, BUFFER_SIZE);
		next_line = ft_strjoin(next_line, buffer);
	}
	adjust_line_and_buffer(next_line, buffer);
	if (!next_line[0] || characters_read < 0)
	{
		free(next_line);
		return (NULL);
	}
	return (next_line);
}
