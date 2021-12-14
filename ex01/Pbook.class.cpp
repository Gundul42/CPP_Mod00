/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:32:21 by graja             #+#    #+#             */
/*   Updated: 2021/12/14 08:08:01 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.class.hpp"

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
	std::cout << "Fist name     : " <<
		this->phonebook[n].get_firstname() << std::endl;
	std::cout << "Last name     : " << 
		this->phonebook[n].get_lastname() << std::endl;
	std::cout << "Nickname      : " << 
		this->phonebook[n].get_nickname() << std::endl;
	std::cout << "Phone Number  : " << 
		this->phonebook[n].get_phonenbr() << std::endl;
	std::cout << "Darkest secret: " << 
		this->phonebook[n].get_secret() << std::endl;
	std::cout << std::endl;
}

