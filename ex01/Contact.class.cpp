/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:21:16 by graja             #+#    #+#             */
/*   Updated: 2021/12/13 13:55:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


void	Contact::set_firstname(std::string name)
{
	this->firstname = name;
}

void	Contact::set_lastname(std::string name)
{
	this->lastname = name;
}

void	Contact::set_nickname(std::string name)
{
	this->nickname = name;
}

void	Contact::set_phonenbr(std::string nbr)
{
	this->phonenbr = nbr;
}

void	Contact::set_secret(std::string data)
{
	this->secret = data;
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phonenbr(void)
{
	return (this->phonenbr);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}
