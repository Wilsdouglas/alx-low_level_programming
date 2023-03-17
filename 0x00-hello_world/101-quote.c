#include <unistd.h>

/**
 * main - my point
 *
 * description:: print a quote using write function
 * size_t write(int fd, const void *buf, size_t count);
 *
 * Return: 1 (error)
 */

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
