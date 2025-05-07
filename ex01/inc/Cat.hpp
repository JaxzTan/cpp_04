/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:43:24 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 14:59:08 by chtan            ###   ########.fr       */
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
		Cat &operator=(const Cat &src);
		~Cat();

		void makeSound(void)const;
		void getIdeas(void)const;
		void setIdea(size_t i, std::string idea);
        void printBrainAddress() const;
};
