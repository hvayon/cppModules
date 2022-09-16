/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:32:36 by natalia           #+#    #+#             */
/*   Updated: 2022/09/16 16:22:04 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceString(std::string replace, std::string init, std::string &tmp) {
	for (size_t i = 0; i < tmp.size(); i++) {
		if (!tmp.compare(i, init.size(), init)) {
			tmp.erase(i, init.size());
			tmp.insert(i, replace);
		}
	}
}

int	main(int argc, char **argv) {
	std::string 	file;
	std::string		tmp;
	std::ifstream	inFile;
	std::ofstream	outFile;
	
	if (argc < 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);	
	}
	file = argv[1];
	inFile.open(file);
	if (!inFile.is_open()) {
		std::cout << "The input file cannot be opened" << std::endl;
		return (1);
	}
	outFile.open(file + ".replace");
	if (!outFile.is_open()) {
		std::cout << "The output file cannot be opened" << std::endl;
		inFile.close();
		return (1);
	}
	while ( inFile.good() ) {
		getline(inFile, tmp);
		replaceString(argv[3], argv[2], tmp);
		outFile << tmp ;
		if (!inFile.eof())
			outFile << '\n';
	}
	inFile.close();
	outFile.close();
}
