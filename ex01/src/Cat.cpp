/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:44:25 by chtan             #+#    #+#             */
/*   Updated: 2025/05/01 16:58:59 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << GREEN_H << "Cat default constructor called" << RESET_H << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << GREEN_H << "Cat copy constructor called" << RESET_H <<std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << GREEN_H << "Cat assignment operator called" << RESET_H << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << RED_H << "Cat destructor called" << RESET_H << std::endl;
}

void Cat::makeSound() const
{
    std::cout << BLUE_H << "Meow!" << RESET_H << std::endl;
}
