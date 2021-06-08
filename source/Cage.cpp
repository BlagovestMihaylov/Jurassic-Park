#include "../include/Cage.hpp"

Cage::Cage()
{
    climat = "UNKNOWN";
    era = "UNKNOWN";
    cageSize = 0;
    cageType = "UNKNOWN";
}

const bool Cage::full() const
{
    return dinos.full();
}

const bool Cage::empty() const
{
    return dinos.empty();
}

Cage::Cage(String _climat, String _era, size_t _size)
{
    climat = _climat; //need
    era = _era;       //need
    cageSize = _size; //need
    if (cageSize == 1)
        cageType = "SMALL";
    if (cageSize == 3)
        cageType = "MEDIUM";
    if (cageSize == 10)
        cageType = "LARGE";
}

String Cage::getClimate() const
{
    return climat;
}

String Cage::getEra() const
{
    return era;
}

String Cage::getType() const
{
    return cageType;
}

size_t Cage::getSize() const
{
    return cageSize;
}

void Cage::setClimate(String _climat)
{
    climat = _climat;
}

void Cage::setEra(String _era)
{
    era = _era;
}

void Cage::setType(String _type)
{
    cageType = _type;
    if (cageType == "SMALL")
        cageSize = 1;
    if (cageType == "MEDIUM")
        cageSize = 3;
    if (cageType == "LARGE")
        cageSize = 10;
}

void Cage::setSize(size_t _size)
{
    cageSize = _size;
    if (cageSize == 1)
        cageType = "SMALL";
    if (cageSize == 3)
        cageType = "MEDIUM";
    if (cageSize == 10)
        cageType = "LARGE";
}

void Cage::addDino(Dinosaur Dino)
{
    if (dinos.free())
        dinos.push(Dino);
}

void Cage::removeDino(size_t index)
{
    dinos.remove(index);
    std::cout << "Dino number " << index << " removed. Now the cage contains these dinos: \n";
    std::cout << dinos << std::endl;
}

void Cage::showDinos() const
{
    std::cout << dinos << std::endl;
}

void Cage::addDinoConsole()
{

    Dinosaur temp;
    String str;
    std::cout << "Enter Dino's name: ";
    std::cin >> str;
    temp.setName(str);
    std::cout << "Enter " << temp.getName() << "'s class: ";
    std::cin >> str;
    while (!((str == "HERBIVORE" && climat == "LAND") || (str == "CARNIVORE" && climat == "LAND") || (str == "FLYING" && climat == "AERIAL") || (str == "AQUATIC" && climat == "HYDRO")))
    {
        std::cout << "YOU CANNOT PUT " << temp.getName() << " WHO IS " << str << " IN CAGE THAT HAS CLIMAT: " << climat << "\n";
        std::cout << "Enter " << temp.getName() << "'s correct class: ";
        std::cin >> str;
    }

    temp.setClass(str);
    std::cout << "Enter " << temp.getName() << "'s era: ";
    std::cin >> str;
    while (!(era == str))
    {
        std::cout << "YOU CANNOT PUT " << temp.getName() << " WHO IS FROM " << str << " IN CAGE FROM " << era << "\n";
        std::cout << "Enter " << temp.getName() << "'s correct era: ";
        std::cin >> str;
    }

    temp.setEra(str);
    std::cout << "Enter " << temp.getName() << "'s gender: ";
    std::cin >> str;
    while (!(str == "FEMALE" || str == "MALE"))
    {
        std::cout << "SORRY, WE DONT SUPPORT LGTVHD...\n";
        std::cout << "Enter " << temp.getName() << "'s correct gender: ";
        std::cin >> str;
    }

    temp.setSex(str);
    std::cout << "Enter " << temp.getName() << "'s type: ";
    std::cin >> str;
    temp.setType(str);
    std::cout << temp.getName() << "'s class is " << temp.getClass() << " so their food is " << temp.getFood() << std::endl;
    dinos.push(temp);
}

void Cage::showCageDetails() const
{
    std::cout << "Cage's climate " << climat << "\n";
    std::cout << "Cage's era " << era << "\n";
    std::cout << "Cage's size " << cageSize << "\n";
    std::cout << "Cage's type " << cageType << "\n";
}

void Cage::serialize(std::ofstream &ofs) const
{
    if (!ofs.is_open())
    {
        std::cout << "File was not opened!\n";
        return;
    }

    ofs << climat << "\n";
    ofs << era << "\n";
    ofs << cageSize << "\n";
    ofs << cageType << "\n";

    for (int i = 0; i < dinos.size(); i++)
    {
        dinos[i].serialize(ofs);
    }

    if (ofs.good())
    {
        std::cout << "Successful!" << std::endl;
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
}

void Cage::deserialize(std::ifstream &ifs)
{

    if (!ifs.is_open())
    {
        std::cout << "File was not opened" << std::endl;
        return;
    }

    ifs >> climat;
    ifs >> era;
    ifs >> cageSize;
    ifs >> cageType;

    if (ifs.good())
    {
        std::cout << "Successful!" << std::endl;
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
}