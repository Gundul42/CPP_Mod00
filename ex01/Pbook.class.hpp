/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:17:06 by graja             #+#    #+#             */
/*   Updated: 2021/12/11 14:24:52 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PBOOK_CLASS_H
# define PBOOK_CLASS_H

class Pbook
{
	public:
		Contact	phonebook[7];

		pbook(void);
		~pbook(void);
};
#endif
