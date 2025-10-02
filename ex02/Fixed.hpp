/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:04:23 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/02 17:52:50 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define BLUE	"\033[0;34m"
#define WHITE	"\033[0;37m"
#define RESET	"\033[0m"

class Fixed{

	private:
		int FixedPointValue; // Save the Fixed Point Number
		static const int FractionalBits; // Stores the Number of Fractional bits

	public:
		//consturctor
		Fixed(); // Default Constructor
		Fixed(const int wholeNumber);
		Fixed(const float deciNumber);
		Fixed(const Fixed &other); // Copy Constructor
		Fixed& operator = (const Fixed &other); // Copy Assignment Operator
		~Fixed(); // Destructor

		// Member Function

		int getRawBits(void) const; // Function won't modified the object
		void setRawBits(const int raw);

		// Convert Fixed-point value Shift Bits Function
		float toFloat(void)const;
		int toInt(void)const;

		// Comparison Operator
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		// Arithmetic Operator
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		// Increament / Decrement
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		//Overloaded member function
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
	};
	std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
