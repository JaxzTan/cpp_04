/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 19:35:20 by chtan            ###   ########.fr       */
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
	const int	SIZE = 4;
	Animal		*animals[SIZE]; // no constructors called here

	for (size_t i = 0; i < SIZE / 2; ++i)
		animals[i] = new Dog();
	for (size_t i = SIZE / 2; i < SIZE; ++i)
		animals[i] = new Cat();
    for (size_t i = 0; i < SIZE; ++i)
        animals[i]->makeSound();
    for (size_t i = 0; i < SIZE; ++i)
		delete animals[i];

	std::cout << "\n[ DEEP COPY CHECK ]\n";
	Dog basic;
	{
		// Dog tmp (basic);
		basic.setIdea(50, "I love bones");
		Dog tmp(basic);
		std::cout << PURPLE_H << "Basic idea: " << RESET_H << std::endl;
		basic.getIdeas();
		std::cout << PURPLE_H << "Temporary idea before set: " << RESET_H << std::endl;
		tmp.getIdeas();
		tmp.setIdea(50, "I prefer steak");
		std::cout << std::endl;
		std::cout << PURPLE_H << "Temporary idea after set: " << RESET_H << std::endl;
		tmp.getIdeas(); // Says "I prefer steak"
		std::cout << std::endl;
		std::cout << "#### printing brain address ####" << std::endl;
		basic.printBrainAddress();
		tmp.printBrainAddress();
		std::cout << std::endl;
	}
	return (0);
}
