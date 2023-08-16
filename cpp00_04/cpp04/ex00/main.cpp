#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
    std::cout << std::endl;
	const Animal* i = new Cat();
    std::cout << std::endl;
	const Animal* j = new Dog();
    std::cout << std::endl;
	const WrongAnimal* k = new WrongCat();
    std::cout << std::endl;
	const WrongCat* l = new WrongCat();

	std::cout << std::endl << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;

	delete meta;
    std::cout << std::endl;
	delete i;
    std::cout << std::endl;
	delete j;
    std::cout << std::endl;
	delete k;
    std::cout << std::endl;
	delete l;
}
