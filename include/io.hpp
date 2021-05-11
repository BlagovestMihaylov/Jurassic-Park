#ifndef IO_HPP
#define IO_HPP

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
        std::cout << "Incorrect Dinosaur class\ncorrect classes are:\n   Herbivore\n   Carnivore\n   Flying\n Aquantic\n";
        std::cout << "Please enter correct class: ";
        std::cin >> _class;
    }

    return _class;
}

String DinoEraCheck(String _era)
{
    while (!(_era == "Triassic" || _era == "Cretaceous" || _era == "Jurassic"))
    {
        std::cout << "Incorrect Dinosaur era\ncorrect eras are:\n   Triassic\n   Cretaceout\n   Jurassic\n";
        std::cout << "Please enter correct era: ";
        std::cin >> _era;
    }

    return _era;
}

String DinoClimateCheck(String _climate)
{
    while (!(_climate == "Land" || _climate == "Aerial" || _climate == "Hydro"))
    {
        std::cout << "Incorrect Dinosaur climate\ncorrect climates are:\n   Land\n   Aerial\n   Hydro\n";
        std::cout << "Please enter correct climate: ";
        std::cin >> _climate;
    }

    return _climate;
}

String DinoSexCheck(String _sex)
{
     while (!(_sex == "Male" || _sex == "Female"))
    {
        std::cout << "Incorrect Dinosaur gender\ncorrect genders are:\n   Male\n   Female\n";
        std::cout << "Please enter correct gender: ";
        std::cin >> _sex;
    }

    return _sex;
}

#endif