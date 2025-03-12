/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:59:56 by moguille          #+#    #+#             */
/*   Updated: 2025/03/12 21:07:19 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
		int	i;

		i = 0;
		while (str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
}

int	main(int	argc, char	*argv[])
{
	(void)argc;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
}
