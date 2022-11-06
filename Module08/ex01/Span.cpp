/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:26:16 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/06 14:43:56 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) :  _nSize(size) {}

Span::Span (const Span& copy) {
	*this = copy;
}

Span::Span() : _vec(0, 0) {}

Span::~Span() {}

Span& Span::operator = (const Span& rhs) {
	if (this != &rhs) {
		_nSize = rhs._nSize;
		_vec = rhs._vec;
	}
	return *this;
}

void	Span::addNumber(int num) {
	if (_nSize <= _vec.size()) {
		throw Span::OutOfRange();
	} else {
		_vec.push_back(num);
	}
}

int		Span::shortestSpan(void) const {
	if (_vec.size() < 2) {
		throw Span::TooSmall();
	}
	int					minSpan = MAX_INT;
	std::vector<int>	sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	for (int i = 0; i < (int)_nSize; ++i) {
		int tmpVal = std::abs(sorted[i + 1] - sorted[i]);
		if (minSpan > tmpVal) {
			minSpan = tmpVal;
		}
	}
	return	minSpan;
}

int		Span::longestSpan(void) const {
	if (_vec.size() <= 2) {
		throw Span::TooSmall();
	}
	return	*std::max_element(_vec.begin(), _vec.end()) \
		- *std::min_element(_vec.begin(), _vec.end());
}
