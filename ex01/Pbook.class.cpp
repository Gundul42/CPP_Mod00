/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:32:21 by graja             #+#    #+#             */
/*   Updated: 2021/12/12 16:55:52 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.class.hpp"

Contact	Pbook::get_new_contact(void)
{
	Contact	newentry;

	std::cout << "Fist name: ";
	std::cin >> newentry.fname;
	std::cout << "Last name: ";
	std::cin >> newentry.lname;
	std::cout << "Nickname: ";
	std::cin >> newentry.nname;
	std::cout << "Phone Number: ";
	std::cin >> newentry.pnmbr;
	std::cout << "Darkest secret: ";
	std::cin >> newentry.secrt;
	return (newentry);
}

void	Pbook::show_contact(Contact member, int	n)
{
	std::cout.setf (std::ios::right);
	std::cout.width (10);
	std::cout << n << " | " << member.fname << " | " << member.lname;
	std::cout << " | " << member.nname << std::endl;
}
