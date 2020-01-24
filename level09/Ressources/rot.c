#include <unistd.h> 
#include <stdlib.h> 

void    ft_putchar(char c) 
{ 
	write(1, &c, 1); 
} 

int main(int ac, char **av) 
{ 
	int i; 

	i = 0; 
        while (i < 26) 
	{ 
		ft_putchar(av[1][i] - i); 
		i++; 
	} 
	ft_putchar('\n');
}
