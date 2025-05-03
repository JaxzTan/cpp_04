/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:47:02 by chtan             #+#    #+#             */
/*   Updated: 2025/05/03 14:59:39 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
    std::cout << GREEN_H << "Dog constructor called" << RESET_H << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src): Animal(src)
{
    std::cout << GREEN_H << "Dog copy constructor called" << RESET_H << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << GREEN_H << "Dog assignment operator called" << RESET_H << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << RED_H << "Dog destructor called" << RESET_H << std::endl;
}

void Dog::makeSound() const
{
    std::cout << BLUE_H << "Woof!" << RESET_H << std::endl;
}

void Dog::getIdeas() const
{
    std::cout << BLUE_H << "Dog getIdeas called" << RESET_H << std::endl;
    _brain->getIdea(0);
}

void Dog::setIdea(size_t i, std::string idea)
{
    std::cout << BLUE_H << "Dog setIdea called" << RESET_H << std::endl;
    _brain->setIdea(i, idea);
}
