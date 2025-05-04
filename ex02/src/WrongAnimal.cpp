/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:41:11 by chtan             #+#    #+#             */
/*   Updated: 2025/05/02 10:49:49 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << GREEN_H << "Default WrongAnimal constructor called" << RESET_H << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << GREEN_H << "Copy WrongAnimal constructor called" << RESET_H << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << GREEN_H <<"Copy assignment operator called" << RESET_H << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED_H << "WrongAnimal destructor called" << RESET_H << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << PURPLE_H <<"WrongAnimal sound" << RESET_H << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}
