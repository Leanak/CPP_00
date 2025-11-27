/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:04:25 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/27 01:50:46 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
  private:
	int _iContact;
	Contact _myContact[8];

  public:
	PhoneBook(void);
	void addContact(void);
	void display(void);
	// fonctions diverses
};

bool isAllDigit(const std::string str);
bool isAlphaDigit(const std::string str);
