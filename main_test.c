
#include "ft_printf.h"

int	main(void)
{
	char			c = 'K';
	char			*str = "Kang-In Lee";
	int				number = -27;
	unsigned int	u_number = 27;

	//Test print une string literal
	ft_printf("Test string literal.\n");
	//Test print une variable char
	ft_printf("Test char variable: %c\n", c);
	//Test print une variable string
	ft_printf("Test string variable: %s\n", str);
	//Test print l'adresse sur laquelle pointe un pointeur
	ft_printf("Test pointer's address: %p\n", str);
	//Test print une variable int
	ft_printf("Test decimal variable: %d\n", number);
	//Test print une variable unsigned int
	ft_printf("Test unsigned decimal variable: %i\n", u_number);
	//Test print une variable en hexadécimal minuscule
	ft_printf("Test hexadecimal minuscules: %x\n", number);
	//Test print une variable en hexadécimal majuscule
	ft_printf("Test hexadecimal capitals: %X\n", number);
	//Test print un '%' via "%%"
	ft_printf("Test double percentage: %%\n");
	//Test print rien
	ft_printf("");

	//Fin de test
	ft_printf("Test termine :)\n");
}
