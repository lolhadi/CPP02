/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:56:17 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/01 13:58:28 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){

	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << GREEN << a.getRawBits() << RESET << std::endl;
	std::cout << GREEN << b.getRawBits() << RESET << std::endl;
	std::cout << GREEN << c.getRawBits() << RESET << std::endl;

	return 0;
}
