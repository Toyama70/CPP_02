/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:25:08 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/08 11:38:23 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public :
	Fixed();
	~Fixed();
	Fixed(const Fixed& src); //canonical copy
	Fixed(const int nb);
	Fixed(const float nbr);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	Fixed& operator=(const Fixed& rhs); 
	Fixed& operator<<(const Fixed& rhs);
	private :
	int _value;
	static const int _fract;


};

std::ostream&	operator<<(std::ostream &stream, const Fixed& rhs);
#endif