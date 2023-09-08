#include <unistd.h>
/**
 * main - printing using system write function
 * description - Write a C program that prints exactly
 * You are not allowed to use any functions listed in
 * the NAME sect of the man (3) printf or man (3) puts
 *
 * Return: Always 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
