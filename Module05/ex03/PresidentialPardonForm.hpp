/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:33 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 18:06:00 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        static const int	_signLevel;
        static const int    _execLevel;
    public:
	    PresidentialPardonForm();
	    PresidentialPardonForm(PresidentialPardonForm const &);
	    PresidentialPardonForm& operator=(const PresidentialPardonForm &);
	    ~PresidentialPardonForm();

        PresidentialPardonForm(const std::string &);

        int getSCFSign(void) const;
	    int getSCFExe(void) const;
	
	    void	action(void) const;
        static AForm * clone(const std::string& name);
};

#endif