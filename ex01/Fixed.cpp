/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:07:49 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/02 20:18:24 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedPointValue(0){
	std::cout << GREEN << "Default Constructor is Called" << RESET << std::endl;
}
Fixed::Fixed(const int wholeNumber){
	std::cout << BLUE << "Integers Constructor is Called" << RESET << std::endl;
	this->FixedPointValue = wholeNumber << FractionalBits;
}
Fixed::Fixed(const float deciNumber){
	std::cout << GREEN << "Float Constructor is Called" << RESET << std::endl;
	this->FixedPointValue = roundf(deciNumber * (1 << FractionalBits));
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
	// std::cout << "getRawBits member function called" << std::endl;
	return FixedPointValue;
}

void Fixed::setRawBits(const int raw){
	this->FixedPointValue = raw;
}

int Fixed::toInt(void) const{
	return (this->FixedPointValue >> FractionalBits);
}
float Fixed::toFloat(void) const{
	return ((float)this->FixedPointValue / (1 << FractionalBits));
}
std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}
