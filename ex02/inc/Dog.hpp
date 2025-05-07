/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:45:59 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 15:02:29 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        ~Dog();
    
        void makeSound() const;
		void getIdeas(void)const;
        void setIdea(size_t i, std::string idea);
        void printBrainAddress() const;
};

#endif
