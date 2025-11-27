/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:58:18 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/27 01:21:52 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

//Is filled

bool	Contact::isFilled(void)
{
	if (!_firstName.empty() || !_lastName.empty()
		|| !_nickName.empty() || !_phoneNumber.empty()
		|| !_darkestSecret.empty())
			return (true);
	return (false);
}

//First Name
void	Contact::setFirstName(std::string firstNameBuff)
{
	this->_firstName = firstNameBuff;
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);	
}

//Last Name
void	Contact::setLastName(std::string lastNameBuff)
{
	this->_lastName = lastNameBuff;
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);	
}

//Nick Name

void	Contact::setNickName(std::string nickNameBuff)
{
	this->_nickName = nickNameBuff;
}

std::string	Contact::getNickName(void)
{
	return (this->_nickName);
}

//Phone NUmber

void	Contact::setPhoneNumber(std::string phoneNumberBuff)
{
	this->_phoneNumber = phoneNumberBuff;
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);	
}

//Darkest Secret

void	Contact::setDarkestSecret(std::string darkestSecretBuff)
{
	this->_darkestSecret = darkestSecretBuff;
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);	
}
