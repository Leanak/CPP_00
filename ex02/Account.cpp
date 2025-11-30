/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:59:07 by lenakach          #+#    #+#             */
/*   Updated: 2025/11/30 21:43:11 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

//Initialisation des variables statiques en dehors du constructeur puisqu'elles
//ne doivent pas etre reinitialisees a chaque tout mais au contraire une seule fois
//au debut du programme
int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

//Constructeur
Account::Account(int initial_deposit)
{
	//1. Init des variables d'instances
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	
	//2. MAJ des variables statiques
	_nbAccounts++;
	_totalAmount += _amount;
	
	//3. Affiche le log de creation dans le constructeur puisqu'on veut afficher
	//un log quand on compte a bien ete cree. 
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

//Methode prive : _displayTimestamp
void	Account::_displayTimestamp(void)
{
	//1.Recuperer l'heure actuelle (en seconde depuis le 1er janvier 1979)
	std::time_t now = std::time(nullptr);
	//2.Convertir l'heure en une structure tm (pour acceder a l'annee, mois, jour etc)
	std::tm*	local_time = std::localtime(&now);
	//3.Afficher le timestamp au format [YYYYMMDD_HHMMSS]
	std::cout << "[";
	std::cout << local_time->tm_year + 1900; //(puisque tmp_year = annee depuis 1900)
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mon + 1; //(puisque les mois sont de 0 a 11 et qu'on veut de 1 a 12)
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_sec;
	std::cout << "]";

}

void	Account::displayAccountsInfos(void)
{
	//ligne du total
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ';'
			<< "total:" << Account::getTotalAmount() << ";"
			<< "deposits:" << Account::getNbDeposits() << ";"
			<< "withdrawals:" << Account::getNbWithdrawals
			<< std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << this->_amount << ";"
			  << "nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;

	if (this->_amount - withdrawal <= 0)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";"
			  	  << "p_amount:" << p_amount << ";"
			  	  << "withdrawal:" << "refused"
				  << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "withdrawal:" << withdrawal << ";"
			  << "amount:" << this->_amount << ";"
			  << "nb_withdrawals:" << this->_nbWithdrawals
			  << std::endl;
	return (true);
}

//Destructeur
Account::~Account(void) 
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
}