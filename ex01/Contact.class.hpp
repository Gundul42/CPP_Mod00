/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:11:12 by graja             #+#    #+#             */
/*   Updated: 2021/12/11 14:16:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	public:
		char	fname[15];
		char	lname[15];
		char	nname[15];
		char	pnmbr[15];
		char	secrt[15];

		contact(void);
		~contact(void);
};

#endif
