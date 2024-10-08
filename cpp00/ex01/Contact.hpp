/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:47:59 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/23 19:30:44 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class   Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int	index;
	public:
		int			get_index();
		std::string	get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		void		set_index(int index);
		void		set_first_name(std::string input);
		void		set_last_name(std::string input);
		void		set_nickname(std::string input);
		void		set_phone_number(std::string input);
		void		set_darkest_secret(std::string input);
		void		print_all(void);
};

#endif