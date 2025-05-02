/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/01 17:04:43 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

// int main() {
//     const Animal* animals[4];

//     for (int i = 0; i < 2; ++i)
//         animals[i] = new Dog();
//     for (int i = 2; i < 4; ++i)
//         animals[i] = new Cat();

//     for (int i = 0; i < 4; ++i) {
//         animals[i]->makeSound();  // Should print "Woof!" or "Meow!" depending on type
//     }

//     for (int i = 0; i < 4; ++i)
//         delete animals[i]; // Should call correct destructor (virtual)
    
//     return 0;
// }


int main() {
    std::cout << "  === Program start ===" << std::endl;
    const int size = 4;
    const Animal* animals[size];

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i)
        animals[i]->makeSound(); // Woof or Meow

    for (int i = 0; i < size; ++i)
        delete animals[i]; // Should call proper destructors

    return 0;
}
