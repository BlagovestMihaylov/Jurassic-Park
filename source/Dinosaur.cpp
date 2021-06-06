#include "../include/Dinosaur.hpp"

Dinosaur::Dinosaur()
{
    DinoClass = "Unknown";
    DinoEra = "Unknown";
    DinoFood = "Unknown";
    DinoName = "Unknown";
    DinoSex = "Unknown";
    DinoType = "Unknown";
}

Dinosaur::Dinosaur(String _name, String _class, String _type, String _era, String _sex)
{
    DinoName = _name;
    DinoClass = _class; // need //Herbivore, Carnivore, Flying, Aquantic
    DinoType = _type; // need
    DinoEra = _era; //need
    DinoSex = _sex; //need
    if (DinoClass == "Herbivore")
        DinoFood = "Grass";
    if (DinoClass == "Carnivore" || DinoClass == "Flying")
        DinoFood = "Meat";
    if (DinoClass == "Aquantic")
        DinoFood = "Fish";
}

void Dinosaur::setClass(String _class)
{
    DinoClass = _class; // need
    if (DinoClass == "Herbivore")
        DinoFood = "Grass";
    if (DinoClass == "Carnivore" || DinoClass == "Flying")
        DinoFood = "Meat";
    if (DinoClass == "Aquantic")
        DinoFood = "Fish";
}

void Dinosaur::setEra(String _era)
{
    DinoEra = _era; //need
}

void Dinosaur::setName(String _name)
{
    DinoName = _name; 
}

void Dinosaur::setSex(String _sex)
{
    DinoSex = _sex; //need
}

void Dinosaur::setType(String _type)
{
    DinoType = _type; //need
}

String Dinosaur::getClass() const
{
    return DinoClass; 
}

String Dinosaur::getEra() const
{
    return DinoEra;
}

String Dinosaur::getFood() const
{
    return DinoFood;
}

String Dinosaur::getName() const
{
    return DinoName;
}

String Dinosaur::getSex() const
{
    return DinoSex;
}

String Dinosaur::getType() const
{
    return DinoType;
}

std::ostream &operator<<(std::ostream &out, const Dinosaur &dinosaur)
{
    out << "Name: " << dinosaur.DinoName << std::endl
        << "Gender: " << dinosaur.DinoSex << std::endl
        << "Era: " << dinosaur.DinoEra << std::endl
        << "Type: " << dinosaur.DinoType << std::endl
        << "Class: " << dinosaur.DinoClass << std::endl
        << "Food: " << dinosaur.DinoFood << std::endl
        << std::endl;
    return out;
}