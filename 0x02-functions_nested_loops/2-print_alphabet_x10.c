#include <main.h>
/**
 * prints alphabets- prints alphabets 10x, in lower case
 *
 * Return:0
 */
void print_alphabet_x10(void);
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j)
		}
		_putchar('\n')
	}
}
