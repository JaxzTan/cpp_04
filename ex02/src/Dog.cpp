/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:47:02 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 19:36:40 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructors
Dog::Dog(): Animal()
{
	std::cout << GREEN_H << "Dog Default Constructor called" << RESET_H << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << GREEN_H <<"Dog Copy Constructor called" << RESET_H << std::endl;
	*this = copy;
}

// Deconstructors
Dog::~Dog()
{
	delete(this->_brain);
	std::cout << RED_H <<"Dog Deconstructor called" << RESET_H << std::endl;
}

// Overloaded Operators
Dog &Dog::operator=(const Dog &src)
{
	std::cout << GREEN_H <<"Dog Assignation operator called" << RESET_H << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *src._brain;
	return *this;
}

// Public Methods
void	Dog::makeSound(void)const
{
	std::cout << PURPLE_H << this->getType() << " says: **Woof**" << RESET_H <<std::endl;
}

// Getter
void Dog::getIdeas() const
{
    std::cout << BLUE_H << "Dog getIdeas called" << RESET_H << std::endl;
    std::string tmp= _brain->getIdea(42);
    std::cout << YELLOW_H<< _brain->getIdea(50) << RESET_H <<std::endl;
}

// Setter
void	Dog::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}

void Dog::printBrainAddress() const
{
    std::cout << BLUE_H << "Cat printBrainAddress called" << RESET_H << std::endl;
    std::cout << "Brain address: " << _brain << std::endl;
}
