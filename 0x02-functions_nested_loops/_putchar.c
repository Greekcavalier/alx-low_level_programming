#include "main.h"
#include <unistd.h>
/**
 * _puchar writes a character c to stdout
 * @C: the character to print
 * Return: On success 1.
 * On error, -1 is returnes , and errno is et appropriately
 */
int _putchar(char c)

{
        return (write(1, &c, 1));
