/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:07:49 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/01 14:19:11 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedPointValue(0){
	std::cout << GREEN << "Default Constructor is Called" << RESET << std::endl;
}

Fixed::~Fixed(){
	std::cout << RED << "Destructor is Called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << BLUE << "Copy Constructor is called" << RESET << std::endl;
	// copy the value of Fixed Point into other Fixed Point
	*this = other;
}
Fixed& Fixed::operator= (const Fixed &other){
	std::cout << WHITE << "Copy Assignment Operator Called" << RESET << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

int Fixed::getRawBits(void)const {
	std::cout << "getRawBits member function called" << std::endl;
	return FixedPointValue;
}

void Fixed::setRawBits(const int raw){
	this->FixedPointValue = raw;
}
