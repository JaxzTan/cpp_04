/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 09:31:26 by chtan             #+#    #+#             */
/*   Updated: 2025/05/05 14:46:04 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "iostream"

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        
        void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};
