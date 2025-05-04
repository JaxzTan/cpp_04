/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:15:09 by chtan             #+#    #+#             */
/*   Updated: 2025/05/04 11:17:32 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A
# define PURPLE_H "\033[0;35m" //N/A

class Animal
{
	protected:
		std::string _type;
		Animal();

	public:
	// Constructors
		Animal(const Animal &copy);

	// Deconstructors
		virtual ~Animal();

	// Overloaded Operators
		Animal &operator=(const Animal &src);

	// Public Methods
		virtual void makeSound(void)const = 0;
	// Getter
		std::string getType(void)const;
};
