/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:18:49 by graja             #+#    #+#             */
/*   Updated: 2021/12/10 16:11:36 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static
char	*to_upper(char	*str)
{
	char	*cpy;

	cpy = str;
	while (*cpy)
	{
		if (*cpy >= 'a' && *cpy <= 'z')
			*cpy -= 32;
		cpy++;
	}
	return str;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		std::cout << to_upper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
