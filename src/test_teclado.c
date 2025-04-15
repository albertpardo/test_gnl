#include "../get_next_line/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int		fd;
	char	*line;

	fd = 0;
	line = get_next_line(fd);
  	while (line)
	{
		printf("line > %s",line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
