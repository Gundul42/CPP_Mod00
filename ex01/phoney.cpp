/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoney.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:30:11 by graja             #+#    #+#             */
/*   Updated: 2021/12/12 12:00:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Pbook.class.hpp"

int	main(void)
{
	int	i;
	Pbook	mybook;

	i = 0;
	while (i < 8)
	{
		std::cout << "Fist name: ";
		std::cin >> mybook.phonebook[i].fname;
		std::cout << "Last name: ";
		std::cin >> mybook.phonebook[i].lname;
		std::cout << "Nickname: ";
		std::cin >> mybook.phonebook[i].nname;
		std::cout << "Phone Number: ";
		std::cin >> mybook.phonebook[i].pnmbr;
		std::cout << "Darkest secret: ";
		std::cin >> mybook.phonebook[i].secrt;
		std::cout << std::endl << std::endl;
		i++;
	}
	mybook.testint();
}
