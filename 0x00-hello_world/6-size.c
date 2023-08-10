#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d byte(s)\n", (int)sizeof(char);
printf("Size of an int: %d byte(s)\n", (int)sizeof(int);
printf("size of a long int: %d byte(s)\n", (int)sizeof(long int);
printf("size of a long long int: %d byte(s)\n", (int)sizeof(long long int);
printf("size of a float: %d byte(s)\n", (int)sizeof(float);
return (0);
}
