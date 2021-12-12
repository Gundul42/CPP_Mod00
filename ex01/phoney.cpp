/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoney.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:30:11 by graja             #+#    #+#             */
/*   Updated: 2021/12/12 16:33:24 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Pbook.class.hpp"

static
void	phoney_show_all(Pbook mybook)
{
	int	i;

	i = 0;
	while (i < mybook.ttl)
	{
		mybook.show_contact(mybook.phonebook[i], i);
		i++;
	}
}

static
int	phoney_prompt(void)
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
		std::cout << std::endl << std::endl;
	}
}

int	main(void)
{
	Pbook	mybook;
	int	choice;
	int	i;

	i = 0;
	mybook.ttl = 0;
	while (1)
	{
		choice = phoney_prompt();
		if (choice == 3)
			return (0);
		else if (choice == 2 && mybook.ttl != 0)
			phoney_show_all(mybook);
		else if (choice == 1)
		{
			mybook.phonebook[i] = mybook.get_new_contact();
			i++;
			mybook.ttl++;
			if (i > 7)
				i = 0;
			if (mybook.ttl > 8)
				mybook.ttl = 8;
		}
	}			
}
