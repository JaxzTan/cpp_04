/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/02 10:52:18 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // ✅ correct: Cat sound
    j->makeSound(); // ✅ correct: Dog sound
    meta->makeSound(); // Animal sound

    std::cout << "-------- WrongAnimal Tests --------" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // ❌ WRONG: outputs WrongAnimal sound
    wrongMeta->makeSound(); // WrongAnimal sound

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;

    return 0;
}

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
