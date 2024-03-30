#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn_recursive(int n, int index, int current, int number)
{
    if (index == n)
    {
        if (number < 10)
            ft_putchar('0');
        ft_putnbr(number);
        if (number < 10)
            ft_putchar('0');
        if (number != 99 - n + 1)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return ;
    }
    while (++current <= 9)
        ft_print_combn_recursive(n, index + 1, current, number * 10 + current);
}

void ft_print_combn(int n)
{
    int index;
    int current;

    index = -1;
    current = -1;
    while (++current <= 9)
        ft_print_combn_recursive(n, index + 1, current, current);
}
