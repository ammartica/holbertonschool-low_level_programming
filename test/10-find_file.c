#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av, char **env)
{

int i = 0;
	char *workingDir = getenv("PWD");
	char *argv[] = {"-ls", NULL};

	while (argv[i])
		printf("elements of argv are: %s\n", argv[i++]);
	printf("Before execve\n");

	if (execve(argv[0], argv) == -1)
		perror("Error:");


	printf("After execve\n");

	return (0);
}

