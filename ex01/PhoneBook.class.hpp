/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:06:32 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/30 21:27:46 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include <sstream>
#include "Contact.class.hpp"

class PhoneBook
{
  private:
	int _index;
	Contact _allContact[8];

  public:
	PhoneBook(void);
	void add_contact(void);
	int display_contact(void);
	void select_contact(void);
};

std::string safeGetLine(const std::string message);
int	isAlphaDigit(std::string str);
int	isDigit(std::string str);
int	isAlpha(std::string str);
