/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:11:12 by graja             #+#    #+#             */
/*   Updated: 2021/12/13 12:05:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenbr;
		std::string	secret;

	public:
		void	set_firstname(std::string name);
		void	set_lastname(std::string name);
		void	set_nickname(std::string name);
		void	set_phonenbr(std::string nbr);
		void	set_secret(std::string data);

		std::string	get_firstname(void);
		std::string	get_lastname(void);
		std::string	get_nickname(void);
		std::string	get_phonenbr(void);
		std::string	get_secret(void);

};

#endif
