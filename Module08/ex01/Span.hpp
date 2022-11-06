/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:26:20 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/06 15:47:58 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define	MAX_INT	2147483647 //чекнуть

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int 		_nSize;
		std::vector<int>	_vec;
	public:
	class OutOfRange : public std::exception
	{
		public : 
			const char*	what(void)	const	throw() { 
				return "Object is out of range";
		}
	};
	class TooSmall : public std::exception {
		public:
			const char* what() const throw() {
				return "Too small";
			}
	};
	Span();
	Span(unsigned int size);
	Span(Span const &);
	Span& operator=(Span const &);
	~Span();

	void	addNumber(int n);
	int		shortestSpan() const;
	int		longestSpan() const;

	template <typename T>
	void	addManyNumbers(T begin, T end){
		if (static_cast<long long>(std::distance(begin, end)) > static_cast<long long>(_vec.capacity()))
			throw Span::OutOfRange();
		_vec.assign(begin, end);
	}
};

#endif

