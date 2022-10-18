/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:51 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/18 22:40:36 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        static const int	_signLevel;
        static const int    _execLevel;
    public:
	    ShrubberyCreationForm();
	    ShrubberyCreationForm(ShrubberyCreationForm const &);
	    ShrubberyCreationForm & operator=(const AForm &);
	    ShrubberyCreationForm();

        ShrubberyCreationForm(const std::string &);

        int getSCFSign(void) const;
	    int getSCFExe(void) const;
	
	    void	action(void) const;
};

#endif