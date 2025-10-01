/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:04:23 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/30 21:54:52 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed{

	private:
		int FixedPointValue; // Save the Fixed Point Number
		const int FractionalBits; // Stores the Number of Fractional bits

	public:
		Fixed::Fixed(); // Default Constructor
		Fixed::Fixed(const Fixed& other); // Copy Constructor
		Fixed& operator = (const Fixed & other); // Copy Assignment Operator
		Fixed::~Fixed(); // Destructor

};
	const int getRawBits(void);
	void setRawBits(const int raw);

#endif
