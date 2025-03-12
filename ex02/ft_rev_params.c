/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:59:56 by moguille          #+#    #+#             */
/*   Updated: 2025/03/12 22:13:03 by moguille         ###   ########.fr       */
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
	int	i;

	i = 1;
	while (i > argc - 1)
	{
		ft_putstr(argv[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
