/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:42:24 by chtan             #+#    #+#             */
/*   Updated: 2025/05/02 16:44:35 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN_H << "Brain default constructor called" << RESET_H << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << GREEN_H << "Brain copy constructor called" << RESET_H << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << RED_H << "Brain destructor called" << RESET_H << std::endl;
}
Brain &Brain::operator=(const Brain &src)
{
    std::cout << YELLOW_H << "Brain assignment operator called" << RESET_H << std::endl;
    if (this != &src)
    {
        for (size_t i = 0; i < 100; i++)
            this->_ideas[i] = src._ideas[i];
    }
    return *this;
}

const std::string Brain::getIdea(size_t i) const
{
    if (i >= 100)
        return "Invalid index";
    return this->_ideas[i];
}

const std::string *Brain::getIdeaAddress(size_t i) const
{
    if (i >= 100)
        return NULL;
    return &this->_ideas[i];
}

void Brain::setIdea(size_t i, std::string idea)
{
    if (i >= 100)
        return;
    this->_ideas[i] = idea;
}
