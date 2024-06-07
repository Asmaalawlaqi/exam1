#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int asma = 0;
	while(*str != '\0')
	{
		asma = asma *10 ;
		asma = asma + *str - '0';
		++str ;
	}
	return(asma);
}

void	print_hex(int asma)
{
	char hex_digits[] = "0123456789abcdef";
	if(asma >= 16)
	print_hex(asma / 16);
	write(1, &hex_digits[asma % 16] , 1);
}
int main(int ac , char **av)
{
	if(ac == 2)

	print_hex(ft_atoi(av[1]));
write(1, "\n" , 1);

}
