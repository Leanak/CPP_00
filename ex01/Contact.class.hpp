/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:58:41 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/27 01:29:57 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class PhoneBook; 

class Contact
{
  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

  public:
	bool isFilled(void);
	void setFirstName(std::string firstNameBuff);
	void setLastName(std::string lastNameBuff);
	void setNickName(std::string nickNamebuff);
	void setPhoneNumber(std::string phoneNumberbuff);
	void setDarkestSecret(std::string darkestSecretBuff);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);
	// Fonctions diverses
};
