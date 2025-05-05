/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:19:26 by chtan             #+#    #+#             */
/*   Updated: 2025/05/05 14:56:09 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("default")
{
    std::cout << GREEN_H << "Animal default constructor called" << RESET_H <<std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << GREEN_H << "Animal copy constructor called" << RESET_H <<std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << GREEN_H << "Animal assignment operator called" << RESET_H <<std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << RED_H << "Animal destructor called" << RESET_H <<std::endl;
}

void Animal::makeSound() const
{
    std::cout << BLUE_H << "Animal sound" << RESET_H << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::setType(const std::string &type)
{
    this->_type = type;
    std::cout << PURPLE_H << "Animal setType called" << RESET_H <<std::endl;
}
