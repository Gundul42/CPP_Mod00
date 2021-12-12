/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:17:06 by graja             #+#    #+#             */
/*   Updated: 2021/12/12 15:54:56 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_CLASS_H
# define PBOOK_CLASS_H

# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>

class Pbook
{
	public:
		int	ttl;
		Contact	phonebook[8];

		Contact	get_new_contact(void);
		void	show_contact(Contact member, int n);
};
#endif
