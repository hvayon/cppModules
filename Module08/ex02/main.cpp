/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:56:43 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/06 17:27:32 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>
#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "stack size = " << mstack.size() << std::endl;

		mstack.push(3); 
		mstack.push(5); 
		mstack.push(737); 
		// //[...] 
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it; 
		}
		std::stack<int> s(mstack); 
	}

	std::cout << std::endl;
	std::cout << std::endl;

	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "stack size = " << mstack.size() << std::endl;;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737); 
		//[...] 
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it; 
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;

	{
		MutantStack<char> mstack;
		mstack.push('a');
		mstack.push('b');
		mstack.push('c');
		mstack.push('d');
		mstack.push('e');
		MutantStack<char>::const_iterator cit = mstack.cbegin();
		MutantStack<char>::const_iterator cite = mstack.cend();
		++cit;
		--cit;
		while (cit != cite) {
			std::cout << *cit << std::endl;
			++cit;
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;


	{
		MutantStack<double> mstack;
		mstack.push(1.1);
		mstack.push(2.2);
		mstack.push(3.3);
		mstack.push(4.4);
		mstack.push(5.5);
		MutantStack<double>::reverse_iterator rit = mstack.rbegin();
		MutantStack<double>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		while (rit != rite) {
			std::cout << *rit << std::endl;
			++rit;
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;
	{
		MutantStack<std::string> mstack;
		mstack.push("Hello");
		mstack.push("World");
		mstack.push("!");
		mstack.push("21");
		mstack.push("42");
		MutantStack<std::string>::const_reverse_iterator crit = mstack.crbegin();
		MutantStack<std::string>::const_reverse_iterator crite = mstack.crend();
		++crit;
		--crit;
		while (crit != crite) {
			std::cout << *crit << std::endl;
			++crit;
		}
	}
	return 0;
}