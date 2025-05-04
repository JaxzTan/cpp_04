/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:43:24 by chtan             #+#    #+#             */
/*   Updated: 2025/05/03 14:58:30 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	private:
		Brain *_brain;

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);

	// Deconstructors
		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};
