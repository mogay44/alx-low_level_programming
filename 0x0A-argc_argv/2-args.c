#include <stdio.h>
/**
 * main - a program that prints all argumets it recevies(one argument per line)
 * @argc - argumet count 
 * @argv - array of arguments
 *
 * Return: alawys 0
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
