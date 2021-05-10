#include "Cage.hpp"
#include "LargeCage.hpp"
#include "MediumCage.hpp"
#include "SmallCage.hpp"
#include "Vector.hpp"
#include "String.hpp"
#include "Dinosaur.hpp"

String DinoClassCheck(String _class) //Herbivore, Carnivore, Flying, Aquantic
{
    while (!(_class == "Herbivore" || _class == "Carnivore" || _class == "Flying" || _class == "Aquintic"))
    {
        std::cout << "Incorrect Dinosaur class\n correct classes are:\n Herbivore\n Carnivore\n Flying\n Aquantic\n";
        std::cout << "Please enter correct class: ";
        std::cin >> _class;
    }

    return _class;
}