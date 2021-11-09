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
    char l = 'm';
    k = ("reafrazg");

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("testeuh %s\n", k);
printf("testeuh %s\n", k);
_printf("testeuh %c\n", l);
printf("testeuh %c\n", l);
    return (0);
}