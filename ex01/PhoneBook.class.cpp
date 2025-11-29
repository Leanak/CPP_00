/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:12:09 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 18:39:27 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <sstream>

PhoneBook::PhoneBook(void) : _index(0)
{
}

std::string	truncateLine(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + "*");	
	return (str);
}

void	PhoneBook::select_contact(void)
{
	int	index_select;
	std::string	buffer;
	while (1)
	{
		buffer = safeGetLine("Choose index");
		if (!isDigit(buffer))
			std::cout << "Only digits are accepted" << std::endl;
		std::istringstream convert (buffer);
		if (!(convert >> index_select))
		{
			std::cout << "Conversion failed" << std::endl;
			continue ;
		}
		if (index_select > this->_index - 1)
		{
			std::cout << "Index not available" << std::endl;
			continue ;
		}
		break ;
	}
	std::cout << std::setw(10) << "Index: " << index_select << std::endl;
	std::cout << std::setw(10) << "First Name: " << truncateLine(this->_allContact[index_select].getFirstName()) << std::endl;
	std::cout << std::setw(10) << "Last Name: " << truncateLine(this->_allContact[index_select].getLastName()) << std::endl;
	std::cout << std::setw(10) << "Nick Name: " << truncateLine(this->_allContact[index_select].getNickName()) << std::endl;	
	std::cout << std::setw(10) << "Phone Number: " << truncateLine(this->_allContact[index_select].getPhoneNumber()) << std::endl;
	std::cout << std::setw(10) << "Darkest Secret: " << truncateLine(this->_allContact[index_select].getDarkestSecret()) << std::endl;
}

void	PhoneBook::display_contact(void)
{
	int	index = 0;
	
	if (this->_index == 0)
	{
		std::cout << "Empty PhoneBook" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << std::setw(1) << "|"
			  << std::setw(10) << "First Name" << std::setw(1) << "|"
			  << std::setw(10) << "Last Name" << std::setw(1) << "|"
			  << std::setw(10) << "Nick Name" << std::endl;
	for (int i=0; i <= 7; i++)
	{
		if (!this->_allContact[i].isFilled())
			;
		else
		{
			std::cout << std::setw(10) << index << std::setw(1) << "|"
					  << std::setw(10) << truncateLine(this->_allContact[i].getFirstName()) << std::setw(1) << "|"
				  	  << std::setw(10) << truncateLine(this->_allContact[i].getLastName()) << std::setw(1) << "|"
					  << std::setw(10) << truncateLine(this->_allContact[i].getNickName()) << std::endl;
		}
		index++;
	}
	return ;
}

void PhoneBook::add_contact(void)
{
	std::string buffer;

	if (this->_index == 8)
		this->_index = 0;

	while (1)
	{
		buffer = safeGetLine("Enter first name: ");
		if (!isAlphaDigit(buffer))
			std::cout << "Invalid format for first name, try again" << std::endl;
		else
		{
			this->_allContact[_index].setFirstName(buffer);
			break ;
		}
	}
	while (1)
	{
		buffer = safeGetLine("Enter last name: ");
		if (!isAlphaDigit(buffer))
			std::cout << "Invalid format for last name, try again" << std::endl;
		else
		{
			this->_allContact[_index].setLastName(buffer);
			break ;
		}
	}
	while (1)
	{
		buffer = safeGetLine("Enter nick name: ");
		if (!isAlphaDigit(buffer))
			std::cout << "Invalid format for nick name, try again" << std::endl;
		else
		{
			this->_allContact[_index].setNickName(buffer);
			break ;
		}
	}
	while (1)
	{
		buffer = safeGetLine("Enter phone number: ");
		if (!isDigit(buffer))
			std::cout << "Invalid format for phone number, try again" << std::endl;
		else
		{
			this->_allContact[_index].setPhoneNumber(buffer);
			break ;
		}
	}
	while (1)
	{
		buffer = safeGetLine("Enter darkest secret: ");
		if (!isAlphaDigit(buffer))
			std::cout << "Invalid format for darkest secret, try again" << std::endl;
		else
		{
			this->_allContact[_index].setDarkestSecret(buffer);
			break ;
		}
	}
	this->_index++;
	std::cout << "Contact added successfully" << std::endl;
	return; 
}