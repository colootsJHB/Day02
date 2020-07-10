/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coloots <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:53:07 by coloots           #+#    #+#             */
/*   Updated: 2020/07/09 17:35:32 by coloots          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 void ft_putchar(char c)
{ 
		write(1, &c, 1);
}

void ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;
	n1 = '0' -1;
	while (++n1 <= '9')
	{ 
		n2 = n1;
		while (++n2 <= '9')
			{
				n3 = n2;
					while (++n3 <= '9')
					{
						if (n1 != '0' || n2 != '1' ||n3 != '2')
								       ft_putchar(',');
						if (n1 != '0' || n2 != '1' || n3 != '2')
										ft_putchar (' ');
						ft_putchar(n1);
						ft_putchar(n2);
						ft_putchar(n3);
					}
				}
		  }
		 ft_putchar('\n');
}

int main(void) 
{ 
		ft_print_comb();
	return 0; 
}


