#include "main.h"

/**
 * convert - Converts a number into a string representation in the given base.
 * @num: Input number to convert.
 * @base: Base for the conversion.
 * @lowercase: Flag to determine if hexadecimal values should be lowercase.
 *
 * Return: A string representing the converted number.
 */
char *convert(unsigned long int num, int base, int lowercase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';

    do {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);

    return (ptr);
}
