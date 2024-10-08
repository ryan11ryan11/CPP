/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:54:55 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 19:34:10 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string	change_sentence(std::string &line, std::string &s2, int index, int s1_len)
{
	std::string	new_line;
	std::string	back;
	int			line_len;
	
	line_len = line.length();
	new_line = line.substr(0, index);
	back = line.substr(index + s1_len, line_len);
	new_line = new_line + s2 + back;
	return (new_line);
}

int	s1_in_line(std::string &line, std::string &s1, int from)
{
	size_t		index;

	index = line.find(s1, from);
	if (index == std::string::npos)
		return (-1);
	else
		return ((int)index);
}

int	main(int argc, char *argv[])
{
	std::string		line;
	int				index = 0;
	int				from = 0;
	std::string		input_file(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (argc != 4)
		return (1);
	std::ifstream	file(argv[1]);
	if (!file.is_open())
	{
		file.close();
		return (1);
	}
	std::string		filename = input_file + ".replace";
	std::ofstream	outfile(filename.c_str());
	while (getline(file, line))
	{
		while ((index = s1_in_line(line, s1, from)) != -1)
		{
			from = index + s2.length();
			if (index == 0)
				from = s2.length();
			if (index == 0)
				line = change_sentence(line, s2, 0, s1.length());
			else
				line = change_sentence(line, s2, index, s1.length());
		}
		from = 0;
		index = 0;
		outfile << line << std::endl;
	}
	file.close();
	return (0);
}
