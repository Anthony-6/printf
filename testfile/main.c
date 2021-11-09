#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *k;
    char l = '\0';
    k = (NULL);

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("testeuh %s\n", k);
printf("testeuh %s\n", k);
_printf("testarrr %c\n", l);
printf("testarrr %c\n", l);
    return (0);
}