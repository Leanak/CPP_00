/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:11:35 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 15:16:51 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

bool	Contact::isFilled(void)
{
	if (!_firstName.empty() || !_lastName.empty()
		|| !_nickName.empty() || !_phoneNumber.empty()
		|| !_darkestSecret.empty())
			return (true);
	return (false);
}

void	Contact::setFirstName(std::string buffer)
{		
	this->_firstName = buffer;
	return ;
}

void	Contact::setLastName(std::string buffer)
{		
	this->_lastName = buffer;
	return ;
}

void	Contact::setNickName(std::string buffer)
{		
	this->_nickName = buffer;
	return ;
}

void	Contact::setPhoneNumber(std::string buffer)
{		
	this->_phoneNumber = buffer;
	return ;
}

void	Contact::setDarkestSecret(std::string buffer)
{		
	this->_darkestSecret = buffer;
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string Contact::getNickName(void)
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}
