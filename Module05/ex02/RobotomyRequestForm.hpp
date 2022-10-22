/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:43 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 15:45:51 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        static const int	_signLevel;
        static const int    _execLevel;
    public:
	    RobotomyRequestForm();
	    RobotomyRequestForm(RobotomyRequestForm const &);
	    RobotomyRequestForm& operator=(const RobotomyRequestForm &);
	    ~RobotomyRequestForm();

        RobotomyRequestForm(const std::string &);

        int getSCFSign(void) const;
	    int getSCFExe(void) const;
	
	    void	action(void) const;
};

#endif