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
	int			nb_words;

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

	std::cout << "How many random words do you want ?" << std::endl;
	std::cin >> nb_words;

	for (int i = 0; i < nb_words; i++) {
		c_rword = strfry(c_rword);
		rword = c_rword;
		rword.resize(10);
		std::cout << rword << std::endl;
	}

	free(c_rword);
	return 0;
}
