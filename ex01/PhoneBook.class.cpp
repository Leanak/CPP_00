/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:19:47 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/27 01:55:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void): _iContact(0) 
{	
}

std::string	truncateLine(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + "*");	
	return (str);
}

void PhoneBook::addContact()
{
	// Gerer si c'est deja pleins apres;
	if (this->_iContact == 7)
		this->_iContact = 0;
	std::string buff;
	std::cout << "Add first name" << std::endl;
	std::cin >> buff;
	if (!isAlphaDigit(buff))
	{
		std::cout << "Invalid format (Alpha or Digit)" << std::endl;
		return ;
	}
	this->_myContact[_iContact].setFirstName(buff);
	std::cout << "Add last name" << std::endl;
	std::cin >> buff;
	if (!isAlphaDigit(buff))
	{
		std::cout << "Invalid format (Alpha or Digit)" << std::endl;
		return ;
	}
	this->_myContact[_iContact].setLastName(buff);
	std::cout << "Add nick name" << std::endl;
	std::cin >> buff;
	if (!isAlphaDigit(buff))
	{
		std::cout << "Invalid format (Alpha or Digit)" << std::endl;
		return ;
	}
	this->_myContact[_iContact].setNickName(buff);
	std::cout << "Add phone number" << std::endl;
	std::cin >> buff;
	if (!isAllDigit(buff))
	{
		std::cout << "Invalid format (Digits only)" << std::endl;
		return ;
	}
	this->_myContact[_iContact].setPhoneNumber(buff);
	std::cout << "Add darkest secret" << std::endl;
	std::cin >> buff;
	if (!isAlphaDigit(buff))
	{
		std::cout << "Invalid format (Alpha or Digit)" << std::endl;
		return ;
	}
	this->_myContact[_iContact].setDarkestSecret(buff);
	this->_iContact++;
	return ;
}

void	PhoneBook::display(void)
{
	int	index = 0;
	
	std::cout << std::setw(10) << "Index"
			  << std::setw(1) << "|"
			  << std::setw(10) << "First Name"
			  << std::setw(1) << "|"
			  << std::setw(10) << "Last Name"
			  << std::setw(1) << "|"
			  << std::setw(10) << "Nick Name"
			  << std::endl;
	for (int i=0; i <= 7; i++)
	{
		if (!this->_myContact[i].isFilled())
			;
		else
		{
			std::cout << std::setw(10) << index
					<< std::setw(1) << "|"
					<< std::setw(10) << truncateLine(this->_myContact[i].getFirstName())
				  	<< std::setw(1) << "|"
				  	<< std::setw(10) << truncateLine(this->_myContact[i].getLastName())
				  	<< std::setw(1) << "|"
				  	<< std::setw(10) << truncateLine(this->_myContact[i].getNickName())
				  	<< std::endl;
		}
		index++;
	}
	return ;
}