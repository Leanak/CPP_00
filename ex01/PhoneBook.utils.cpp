/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:19:48 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 18:42:02 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

std::string	safeGetLine(const std::string message)
{
	std::string buffer;

	std::cout << message << std::endl;
	if (!std::getline(std::cin, buffer))
		exit (0);
	return (buffer);
}

int	isAlphaDigit(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isalnum(str[i]) && str[i] != 32 && str[i] != '-')
			return (0);
	}
	return (1);
}

int	isDigit(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}