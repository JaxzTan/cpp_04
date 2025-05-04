/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 09:31:13 by chtan             #+#    #+#             */
/*   Updated: 2025/05/02 10:48:09 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << GREEN_H << "Default WrongCat constructor called" << RESET_H << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << GREEN_H << "Copy WrongCat constructor called" <<  RESET_H << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << GREEN_H <<"Copy assignment operator called" << RESET_H << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << RED_H << "WrongCat destructor called" << RESET_H << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << PURPLE_H << "WrongMeow" << RESET_H << std::endl;
}
