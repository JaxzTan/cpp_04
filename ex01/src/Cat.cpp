/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:44:25 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 14:59:53 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << GREEN_H << "Cat default constructor called" << RESET_H << std::endl;
    this->_type = "Cat";
    _brain = new Brain();
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

void Cat::getIdeas() const
{
    std::cout << BLUE_H << "Dog getIdeas called" << RESET_H << std::endl;
    std::string tmp= _brain->getIdea(42);
    std::cout << PURPLE_H << _brain->getIdea(50) << RESET_H <<std::endl;
}

void Cat::setIdea(size_t i, std::string idea)
{
    std::cout << BLUE_H << "Cat setIdea called" << RESET_H << std::endl;
    _brain->setIdea(i, idea);
}

void Cat::printBrainAddress() const
{
    std::cout << BLUE_H << "Dog brain address: " << _brain << RESET_H << std::endl;
}
