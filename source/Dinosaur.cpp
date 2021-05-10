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
    DinoClass = _class; //Herbivore, Carnivore, Flying, Aquantic
    DinoType = _type;
    DinoEra = _era;
    DinoSex = _sex;
    if(DinoClass == "Herbivore") DinoFood = "Grass";
    if(DinoClass == "Carnivore" || DinoClass == "Flying") DinoFood = "Meat";
    if(DinoClass == "Aquantic") DinoFood = "Fish";
    
}

void Dinosaur::setClass(String _class) 
{
    DinoClass = _class;
    if(DinoClass == "Herbivore") DinoFood = "Grass";
    if(DinoClass == "Carnivore" || DinoClass == "Flying") DinoFood = "Meat";
    if(DinoClass == "Aquantic") DinoFood = "Fish";
}