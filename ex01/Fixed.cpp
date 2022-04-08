/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:25:10 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/08 11:47:56 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;

}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = src;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << this->_fract;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nbr * (1 << this->_fract));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->getRawBits(); //proves there is no value assignment here already done	
	if(this != &rhs)
		this->_value = rhs._value;
		return *this;
}

std::ostream&	operator<<(std::ostream &stream, const Fixed & rhs)
{
	stream << rhs.toFloat();
	return stream;
}

float	Fixed::toFloat() const
{
	return ((float)this->_value / (1 << 8));
}

int		Fixed::toInt() const
{
	return (this->_value >> 8);
}

