/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:14:55 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 19:18:02 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	while (av[i])
	{
		j=0;
		for (j = 0 ; av[i][j] ; j++)
			std::cout << (char)toupper(av[i][j]);
		std::cout << ' ';
		i++;
		
	}
	std::cout << std::endl;
	return (0);
}
