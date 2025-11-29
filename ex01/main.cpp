/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:06:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 18:38:15 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	instance;
	std::string	buff;

	std::cout<< "Welcome to your PhoneBook" << std::endl;
	for ( ; ; )
	{
		buff = safeGetLine("Enter a command please (ADD, SEARCH, EXIT)");
		if (buff == "ADD")
			instance.add_contact();
		else if (buff == "SEARCH")
		{
			instance.display_contact();
			instance.select_contact();
		}
		else if (buff == "EXIT")
			return (1);		
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}