#include "day02.h"

void	ft_putstr(char *str) {
	int i;

	i = 0;
	ft_putchar(str[i]);
	if (str[i] != '\0')
		ft_putstr(&str[++i]);
}
