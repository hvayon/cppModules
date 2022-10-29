/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:17:09 by natalia           #+#    #+#             */
/*   Updated: 2022/10/29 19:38:36 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

typedef struct	s_data
{
	int			i;
	char		c;
	unsigned	u;
	long		l;
}				Data;
 
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif