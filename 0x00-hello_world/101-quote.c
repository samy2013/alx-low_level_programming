#include <stdio.h>
#include <unistd.h>
/**
 * main - A C Program that  print lone using write function
 *
 * Return: 1 (Faile)
 */
int main(void)
{
char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, qu, 59);
return (1);
}
