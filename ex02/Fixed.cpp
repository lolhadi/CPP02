/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:07:49 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/02 20:19:29 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

// Constructor init

Fixed::Fixed() : FixedPointValue(0){
	std::cout << GREEN << "Default Constructor is Called" << RESET << std::endl;
}
Fixed::Fixed(const int wholeNumber){
	std::cout << GREEN << "Integers Constructor is Called" << RESET << std::endl;
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
	std::cout << GREEN << "Copy Constructor is called" << RESET << std::endl;
	*this = other;
}
Fixed& Fixed::operator= (const Fixed &other){
	std::cout << GREEN << "Copy Assignment Operator Called" << RESET << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

// Member Function Initiliaze
int Fixed::getRawBits(void)const {
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

// Comparsion Function
bool Fixed::operator>(Fixed const &other)const{
	return (this->FixedPointValue > other.FixedPointValue);
}
bool Fixed::operator<(Fixed const &other)const{
	return (this->FixedPointValue < other.FixedPointValue);
}
bool Fixed::operator>=(Fixed const &other)const{
	return (this->FixedPointValue >= other.FixedPointValue);
}
bool Fixed::operator<=(Fixed const &other)const{
	return (this->FixedPointValue <= other.FixedPointValue);
}
bool Fixed::operator==(Fixed const &other)const{
	return (this->FixedPointValue == other.FixedPointValue);
}
bool Fixed::operator!=(Fixed const &other)const{
	return (this->FixedPointValue != other.FixedPointValue);
}

// Arithmetic Function
Fixed Fixed::operator+(Fixed const &other) const{
return (Fixed(toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(Fixed const &other) const{
return (Fixed(toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(Fixed const &other) const{
	return (Fixed(toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(Fixed const &other) const{
return (Fixed(toFloat() / other.toFloat()));
}

// Increament/Decreament
Fixed& Fixed::operator++(){
	this->FixedPointValue++;
	return *this;
}

Fixed& Fixed::operator--(){
	this->FixedPointValue--;
	return*this;
}
Fixed Fixed::operator++(int){
	Fixed temp(*this);
	this->FixedPointValue++;
	return temp;
}
Fixed Fixed::operator--(int){
	Fixed temp(*this);
	this->FixedPointValue--;
	return temp;
}

// Overloaded Function
Fixed& Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed& Fixed::min (const Fixed &a, const Fixed &b){
	return(a < b ? a : b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed& Fixed::max (const Fixed &a, const Fixed &b){
	return(a > b ? a : b);
}
