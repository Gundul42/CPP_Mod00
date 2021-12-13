/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:32:21 by graja             #+#    #+#             */
/*   Updated: 2021/12/13 18:42:26 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.class.hpp"

Pbook::Pbook(void)
{
	this->ttl = 0;
	this->i	= 0;
}

int	Pbook::prompt(void)
{
	std::string	data;
	
	while (1)
	{
		std::cout << "*************************************" << std::endl;
		std::cout << "** Phoney, your happy phonebook    **" << std::endl;
		std::cout << "*************************************" << std::endl;
		std::cout << "** ADD    : add new contact        **" << std::endl;
		std::cout << "** SEARCH : list and view contacts **" << std::endl;
		std::cout << "** EXIT   : exit phonebook         **" << std::endl;
		std::cout << "*************************************" << std::endl;
		std::cout << ": ";
		std::cin >> data;
		if (!data.compare("ADD"))
			return (1);
		else if (!data.compare("SEARCH"))
			return (2);
		else if (!data.compare("EXIT"))
			return (3);
		else
			return (-1);
	}
}
		
void	Pbook::add_contact(void)
{
	int			i;
	std::string	feed;

	i = this->i;
	std::cout << "Please enter contact #" << i << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, feed);  // if this misses, First name is skipped
	std::getline(std::cin, feed);
	this->phonebook[i].set_firstname(feed);
	std::cout << "Last name: ";
	std::getline(std::cin, feed);
	this->phonebook[i].set_lastname(feed);
	std::cout << "Nickname: ";
	std::getline(std::cin, feed);
	this->phonebook[i].set_nickname(feed);
	std::cout << "Phone Number: ";
	std::getline(std::cin, feed);
	this->phonebook[i].set_phonenbr(feed);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, feed);
	this->phonebook[i].set_secret(feed);
	i++;
	if (i < 8)
		this->i = i;
	else
		this->i = 0;
	if (this->ttl < 8)
		this->ttl++;
}

std::string	Pbook::fit2ten(std::string str)
{
	if (str.size() < 11)
		return (str);
	str.resize(9);
	str.append(".");
	return (str);
}
	
void	Pbook::list_contact(void)
{
	int	i;

	i = 0;
	while (i < this->ttl)
	{
		std::cout << std::setw(10) << i + 1 <<  " | " << std::setw(10) <<
			this->fit2ten(this->phonebook[i].get_firstname());
		std::cout << " | " << std::setw(10) <<
			this->fit2ten(this->phonebook[i].get_lastname());
		std::cout << " | " << std::setw(10) <<
			this->fit2ten(this->phonebook[i].get_nickname());
		i++;
		std::cout << std::endl;
	}
}

void	Pbook::list_one_contact(int n)
{
	if (n < 0 || n > 7)
		return ;
	std::cout << std::endl;
	std::cout << "Fist name     : " << this->phonebook[n].get_firstname() << std::endl;
	std::cout << "Last name     : " << this->phonebook[n].get_lastname() << std::endl;
	std::cout << "Nickname      : " << this->phonebook[n].get_nickname() << std::endl;
	std::cout << "Phone Number  : " << this->phonebook[n].get_phonenbr() << std::endl;
	std::cout << "Darkest secret: " << this->phonebook[n].get_secret() << std::endl;
	std::cout << std::endl;
}

void	Pbook::search_contact(void)
{
	int		choice;
	std::string	input;

	if (!this->ttl)
		return ;
	choice = 0;
	while (choice != -1)
	{
		this->list_contact();
		std::cout << std::endl << "Enter # or -1 to exit: ";
		std::getline(std::cin, input);
		choice = atoi(input.c_str());
		if (choice > 0 && choice <= this->ttl)
			this->list_one_contact(choice - 1);
		else if (choice != -1)
			std::cout << "Syntax Error" << std::endl << std::endl;
	}
}

