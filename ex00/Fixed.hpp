/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:04:23 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/01 14:02:31 by muhabin-         ###   ########.fr       */
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
		Fixed(); // Default Constructor
		Fixed(const Fixed &other); // Copy Constructor
		Fixed& operator = (const Fixed &other); // Copy Assignment Operator
		~Fixed(); // Destructor

	int getRawBits(void) const; // Function won't modified the object
	void setRawBits(const int raw);
};

#endif
