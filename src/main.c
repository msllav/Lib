#include "include/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int fd;
	char *line;
	int ret;
	ac = 0;

	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
		printf("Line = %s\n", line);
	return (0);
}
