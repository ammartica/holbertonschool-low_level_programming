/*use int main(int ac, char **av, char **env)
 * **env is already full of the variables
 * do string compare between *name and **env
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name)
{
	int i, sum;

	while (environ[i])
	{
		sum += i;
		i++;
	}

	printf("sum of stirngs in environ is: %i\n", sum);

	for (i = 0; i < sum; i++)
	{
		if (strstr(environ[i], name))
			printf("Found variable %s in environment: %s\n", name, environ[i]);
	}
	return (environ[i]);
}

int main(void)
{
	int i, sum;

	while (*environ[i])
	{
		sum += i;
		i++;
	}
	
	printf("sum of stirngs in environ is: %i\n", sum);
	
	_getenv("PATH");
	
	return (0);
}

