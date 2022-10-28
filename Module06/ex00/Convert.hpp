/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:41:06 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/28 21:25:58 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <cmath>
# include <cfloat>
# include <limits.h>

class Convert {
    private:
        bool		_err;
        std::string	_input;
        double		_val;
    public:
        Convert();
		Convert(Convert const &);
		Convert& operator=(Convert const &);
		~Convert();
        
        Convert(const std::string &);

        class BadStrException: public std::exception {
            const char* what() const throw();
        };

	    std::string	getInput(void) const;
        bool	getErr(void) const;
	    double	getVal(void) const;

	    char	getChar(void) const;
	    int		getInt(void) const;
	    float	getFloat(void) const;
	    double	getDouble(void) const;	
};
std::ostream &operator<<(std::ostream &o, Convert const &);

#endif