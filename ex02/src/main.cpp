/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/05 17:26:06 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	// std::cout << std::boolalpha;
	// std::cout << "Is the AAnimal class abstract?: " << std::is_abstract<AAnimal>::value << std::endl;
	// AAnimal	test; // This will fail during compilation, showing that it's abstract
	// instantiate(AAnimal()); // this as well (C++11)
	Animal	*test = new Cat();
	std::cout << BLUE_H <<test->getType() << RESET_H <<std::endl;
	test->makeSound();

	Animal	*test2 = new Dog();
	std::cout << BLUE_H <<test2->getType() << RESET_H << std::endl;
	test2->makeSound();
	delete test;
	delete test2;
	return (0);
}
