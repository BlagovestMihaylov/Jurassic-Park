#include "../include/Cage.hpp"

Cage::Cage()
{
    climat = "UNKNOWN";
    era = "UNKNOWN";
    cageSize = 0;
    cageType = "UNKNOWN";
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

void Cage::addDino(Dinosaur Dino)
{
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
    std::cin >> str;
    temp.setName(str);
    std::cin >> str;
    temp.setClass(str);
    std::cin >> str;
    temp.setEra(str);
    std::cin >> str;
    temp.setSex(str);
    std::cin >> str;
    temp.setType(str);
    dinos.push(temp);
}