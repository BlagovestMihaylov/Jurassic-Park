#include "../include/Dinosaur.hpp"

Dinosaur::Dinosaur()
{
    DinoClass = "UNKNOWN";
    DinoEra = "UNKNOWN";
    DinoFood = "UNKNOWN";
    DinoName = "UNKNOWN";
    DinoSex = "UNKNOWN";
    DinoType = "UNKNOWN";
}

Dinosaur::Dinosaur(String _name, String _class, String _type, String _era, String _sex)
{
    DinoName = _name;
    DinoClass = _class; // need //HERBIVORE, CARNICORE, Flying, AQUATIC
    DinoType = _type;   // need
    DinoEra = _era;     //need
    DinoSex = _sex;     //need
    if (DinoClass == "HERBIVORE")
        DinoFood = "GRASS";
    if (DinoClass == "CARNIVORE" || DinoClass == "FLYING")
        DinoFood = "MEAT";
    if (DinoClass == "AQUATIC")
        DinoFood = "FISH";
}

void Dinosaur::setClass(String _class)
{
    DinoClass = _class; // need
    if (DinoClass == "HERBIVORE")
        DinoFood = "GRASS";
    if (DinoClass == "CARNIVORE" || DinoClass == "FLYING")
        DinoFood = "MEAT";
    if (DinoClass == "AQUATIC")
        DinoFood = "FISH";
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

void Dinosaur::serialize(std::ofstream &ofs) const
{
    if (!ofs.is_open())
    {
        std::cout << "File was not opened!\n";
        return;
    }

    ofs << DinoName << "\n";
    ofs << DinoClass << "\n";
    ofs << DinoEra << "\n";
    ofs << DinoType << "\n";
    ofs << DinoSex << "\n";
    ofs << DinoFood << "\n";

    if (ofs.good())
    {
        std::cout << "Successful!" << std::endl;
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
}
