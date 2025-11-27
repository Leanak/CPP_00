/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:20:17 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/27 01:57:04 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	instance;
	std::string	buff;
	
	std::cout << "Welcome to your PhoneBook" << std::endl;
	for ( ; ; )
	{
		std::cout << "Enter a command please" << std::endl;
		std::cin >> buff;
		if (buff == "EXIT")
			return (1);
		else if (buff == "ADD")
			instance.addContact();
		else if (buff == "SEARCH")
			instance.display();
		else
			std::cout << "Invalid command, try : ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
