/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:17:06 by graja             #+#    #+#             */
/*   Updated: 2021/12/13 17:23:44 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_CLASS_H
# define PBOOK_CLASS_H

# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

class Pbook
{
	private:
		int		ttl;
		int		i;
		Contact		phonebook[8];
		std::string	fit2ten(std::string str);
		void	list_contact(void);
		void	list_one_contact(int n);

	public:
		Pbook(void);
		int	prompt(void);
		void	add_contact(void);
		void	search_contact(void);
};

#endif
