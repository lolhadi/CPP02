/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:20:18 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/02 19:44:40 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){

	Fixed a;
	Fixed b(Fixed (5.05f) * Fixed (2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max (a,b) << std::endl;
/*
	Fixed a(5.5f);
	Fixed b(10);

	Fixed &ref = Fixed::min(a, b);
	std::cout << "a and b: " << ref << std::endl;
	ref.setRawBits(9999);
	std::cout << "After Changing " << ref.getRawBits() << std::endl;

	const Fixed c(5.5f);
	const Fixed d(10);

	const Fixed &reff = Fixed::min(c, d);
	std::cout << " c and d: " << reff << std::endl;
	// reff.setRawBits(9999);
	std::cout << " After Changing " << reff.getRawBits() << std::endl;
*/
	return 0;
}
