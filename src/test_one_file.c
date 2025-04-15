#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int		fd;
	char	*line;

	if (argc == 2)
	{
		fd = open(argv[1],  O_RDONLY);
		if (fd == -1)
		{
			printf("open() failed\n");
			return (1);
		}
		line = get_next_line(fd);
  		while (line)
		{
			printf("%s",line);
			free(line);
			line = get_next_line(fd);
		}
		if (close(fd) == -1)
		{
			printf("\nclose() failed\n");
			return (1);
		}
	}
	else
		printf("put filename\n");
	return (0);
}
