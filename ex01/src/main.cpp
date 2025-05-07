/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/07 13:07:26 by chtan            ###   ########.fr       */
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
		std::cout << PURPLE_H << "Basic idea: " << RESET_H << std::endl;
		basic.getIdeas();
		Dog tmp(basic);
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
	// Dog basic2;
	// {
	// 	Dog tmp2;
	// 	tmp2 = basic2;
	// }
	return (0);
}

// int main()
// {
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*meta[10];
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i % 2)
// 		{
// 			meta[i] = new Cat();
// 			if (meta[i] == NULL)
// 			{
// 				perror("Cat allocation failed");
// 				std::cerr << "Exiting process now";
// 				exit(1);
// 			}
// 		}
// 		else
// 		{
// 			meta[i] = new Dog();
// 			if (meta[i] == NULL)
// 			{
// 				perror("Dog allocation failed");
// 				std::cerr << "Exiting process now";
// 				exit(1);
// 			}
// 		}
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << std::endl;
// 		std::cout << "Animal _type: " << meta[i]->getType() << std::endl;
// 		meta[i]->makeSound();
// 		std::cout << std::endl;
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete(meta[i]);

// //THIS PART IS FOR TESTING DEEP COPY ↓

// 	std::cout << std::endl << std::endl;
// 	std::cout << "#### showing that the copy constructor creates a deep copy ####" << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	Dog *a = new Dog();
// 	// Cat *a = new Cat();
// 	if (a == NULL)
// 	{
// 		perror("Allocation failed");
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}

// 	a->setIdea(0, "I have to sniff it");
// 	a->setIdea(1, "I have to pee on it");
// 	a->setIdea(2, "I have to sniff it again");
// 	a->setIdea(101, "some shit");

// 	Dog *b = new Dog(*a);
// 	// Cat *b = new Cat(*a);
// 	if (b == NULL)
// 	{
// 		perror("Allocation failed");
// 		std::cerr << "Exiting the process now." << std::endl;
// 		exit(1);
// 	}
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting a\033[0m" << std::endl;
// 	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
// 	a->getIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
// 	delete(a);
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting b\033[0m" << std::endl;
// 	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
// 	b->getIdeas();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
// 	delete(b);

// 	return (0);
// }


// int main() {
//     // Part 1: Array of Animals
//     std::cout << GREEN_H << "Constructing animals" << RESET_H << std::endl;
//     const Animal* meta[10];
//     for (int i = 0; i < 10; i++) {
//         meta[i] = (i % 2) ? (Animal*)new Cat() : (Animal*)new Dog();
//         if (!meta[i]) {
//             perror("Allocation failed");
//             exit(1);
//         }
//     }

//     std::cout << BLUE_H << "\nTesting animals" << RESET_H << std::endl;
//     for (int i = 0; i < 10; i++) {
//         std::cout << "\nAnimal " << i << ": " << meta[i]->getType() << std::endl;
//         meta[i]->makeSound();
//     }

//     std::cout << RED_H << "\nDeleting animals" << RESET_H << std::endl;
//     for (int i = 0; i < 10; i++) delete meta[i];

//     // Part 2: Deep copy test
//     std::cout << GREEN_H << "\nDeep copy test" << RESET_H << std::endl;
//     Dog* a = new Dog();
//     a->setIdea(0, "I have to sniff it");
//     a->setIdea(1, "I have to pee on it");

//     Dog* b = new Dog(*a);
//     std::cout << BLUE_H << "\nOriginal dog ideas:" << RESET_H << std::endl;
//     a->getIdeas();
    
//     std::cout << RED_H << "\nDeleting original dog" << RESET_H << std::endl;
//     delete a;
    
//     std::cout << BLUE_H << "\nCopied dog ideas after original deleted:" << RESET_H << std::endl;
//     b->getIdeas();
//     std::cout << RED_H << "\nDeleting copied dog" << RESET_H << std::endl;
//     delete b;

//     return 0;
// }
// int main() {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); // ✅ correct: Cat sound
//     j->makeSound(); // ✅ correct: Dog sound
//     meta->makeSound(); // Animal sound

//     std::cout << "-------- WrongAnimal Tests --------" << std::endl;
//     const WrongAnimal* wrongMeta = new WrongAnimal();
//     const WrongAnimal* wrongCat = new WrongCat();

//     std::cout << wrongCat->getType() << " " << std::endl;
//     wrongCat->makeSound(); // ❌ WRONG: outputs WrongAnimal sound
//     wrongMeta->makeSound(); // WrongAnimal sound

//     delete meta;
//     delete j;
//     delete i;
//     delete wrongMeta;
//     delete wrongCat;

//     return 0;
// }

//test case from the subject pdf
// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     return 0;
// }

// int main() {
//     std::cout << "  === Program start ===" << std::endl;
//     const int size = 4;
//     const Animal* animals[size];

//     for (int i = 0; i < size; ++i) {
//         if (i % 2 == 0)
//             animals[i] = new Dog();
//         else
//             animals[i] = new Cat();
//     }

//     for (int i = 0; i < size; ++i)
//         animals[i]->makeSound(); // Woof or Meow

//     for (int i = 0; i < size; ++i)
//         delete animals[i]; // Should call proper destructors

//     return 0;
// }
