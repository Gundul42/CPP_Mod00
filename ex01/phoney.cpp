/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoney.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:30:11 by graja             #+#    #+#             */
/*   Updated: 2021/12/13 17:04:44 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pbook.class.hpp"


int	main(void)
{
	Pbook	mybook;
	int	choice;

	while (1)
	{
		choice = mybook.prompt();
		if (choice == 3)
		{
			std::cout << "BYEBYE" << std::endl;
			return (0);
		}
		else if (choice == 1)
			mybook.add_contact();
		else if (choice == 2)
			mybook.search_contact();
		else if (choice < 0)
			std::cout << "Syntax Error" << std::endl << std::endl;
	}			
}
