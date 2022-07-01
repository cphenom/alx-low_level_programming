#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * to start our program
  * Prints a string to output
  * without printf and puts
  * Return: 1
  */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, ch, 59);
	return (1);
}
