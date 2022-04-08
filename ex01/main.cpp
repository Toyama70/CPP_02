/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:54:54 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/08 11:41:09 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	main(void) 
{
	
	/*float a = 42.42f;

	float b;

	std::cout << "normal a = " << a << std::endl;
	std::cout << "roundf a = " << roundf(a) << std::endl;
	b = roundf(a * (1 << 8));
	std::cout << "a multiplied by shifting = " << roundf(a * (1 << 8)) << std::endl;
	std::cout << "a multiplied in toFloat = " << b / (1 << 8) << std::endl;
*/	
	
	Fixed	a;
	Fixed	const b( 10 ); 
	Fixed const c( 42.42f ); 
	Fixed const d( b );
	
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
	}