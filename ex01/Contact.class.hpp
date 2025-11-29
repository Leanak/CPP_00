/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:08:02 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/29 15:42:38 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		bool isFilled(void);
		void	setFirstName(std::string uffer);
		void	setLastName(std::string buffer);
		void	setNickName(std::string buffer);
		void	setPhoneNumber(std::string buffer);
		void	setDarkestSecret(std::string buffer);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
};