/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:25:08 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/07 20:36:35 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	public :
	Fixed();
	~Fixed();
	Fixed(const Fixed& src); //canonical copy

	int		getRawBits() const;
	void	setRawBits(int const raw);

	Fixed& operator=(const Fixed& rhs); 

	private :
	int _value;
	static const int _fract;


};

#endif