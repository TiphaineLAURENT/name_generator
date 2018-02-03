//
// EPITECH PROJECT, 2018
// Name_generator
// File description:
// Generate name from others
//

#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include <cstdlib>

int		main()
{
	std::stack<std::string>	words;
	std::string		rword;
	int			length;

	std::cout << "What is the length of the word you want ?" << std::endl;
	std::cin >> length;

	std::cout << "Enter name you want to merge:" << std::endl;
	std::string		word;
	while (word != ".") {
		std::cin >> word;
		if (word == ".")
			break;
		rword += word;
		words.push(word);
	}

	char			*c_rword = strdup(rword.c_str());
	c_rword = strfry(c_rword);
	rword = c_rword;
	rword.resize(10);
	free(c_rword);

	std::cout << rword << std::endl;
	return 0;
}
