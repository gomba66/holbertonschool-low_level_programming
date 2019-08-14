#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	char buf[18];

	fd = open("myfilex4", O_CREAT | O_WRONLY, 0644);
	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}

	write(fd, "Hello Holberton!\n", 17);


	close(fd);

        /*read*/

	fd = open("myfilex4", O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

	read(fd, buf, 17);
	buf[16] = '\0';


	close(fd);

	printf("buf: %s\n", buf);

	return (0);
}
