#include "../include/Park.hpp"
#include <random>
#include <cstdlib>

bool Park::isDinoTypeComparableWithCageClimate(String dType, String cClimate)
{
    if ((dType == "HERBIVORE" && cClimate == "LAND") || (dType == "CARNIVORE" && cClimate == "LAND") || (dType == "FLYING" && cClimate == "AERIAL") || (dType == "AQUATIC" && cClimate == "HYDRO"))
        return true;
    else
        return false;
}

Cage Park::randomCage()
{
    Cage temp;
    int size = rand() % 3;
    if (size == 0)
        temp.setSize(1);
    else if (size == 1)
        temp.setSize(3);
    else
        temp.setSize(10);

    //////////////////////////
    int climate = rand() % 3;
    if (climate == 0)
        temp.setClimate("LAND");
    else if (climate == 1)
        temp.setClimate("HYDRO");
    else
        temp.setClimate("AERIAL");

    //////////////////////////////
    int era = rand() % 3;
    if (era = 0)
        temp.setEra("JURASSIC");
    if (era = 1)
        temp.setEra("TRIASSIC");
    if (era = 2)
        temp.setEra("CREATECEOUS");

    return temp;
}

void Park::addRandomCage()
{
    world.push(randomCage());
}

Park::Park()
{
    int maxCages = rand() % 11;
    for (int i = 0; i < maxCages; ++i)
    {
        addRandomCage();
        personal += 4;
        grassFood++;
        meatFood++;
        fishFood++;
    }
}

Park::Park(size_t _cages)
{
    for (int i = 0; i < _cages; ++i)
    {
        addRandomCage();
        personal += 4;
        grassFood++;
        meatFood++;
        fishFood++;
    }
}

void Park::addCage(String _climate, String _era, size_t _size)
{
    Cage temp;
    temp.setClimate(_climate);
    temp.setEra(_era);
    temp.setSize(_size);
    world.push(temp);
}

void Park::addCage(Cage _cage)
{
    world.push(_cage);
}

void Park::addCageFromConsole()
{
    Cage temp;
    String str;
    std::cout << "Enter cage's climate: ";
    std::cin >> str;
    temp.setClimate(str);
    std::cout << "Enter cage's era: ";
    std::cin >> str;
    temp.setEra(str);
    std::cout << "Enter cage's size";
    size_t size;
    std::cin >> size;
    temp.setSize(size);
    world.push(temp);
}

void Park::addCageIfThereIsNotAnyForTheNewDino(Dinosaur dino)
{
    Cage temp;
    temp.setEra(dino.getEra());
    temp.setSize(3);
    if (dino.getClass() == "HERBIVORE" || dino.getClass() == "CARNIVORE")
        temp.setClimate("LAND");
    else if (dino.getClass() == "AQUATIC")
        temp.setClimate("HYDRO");
    else
        temp.setClimate("AERIAL");
}

void Park::showCages() const
{
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "Cage number: " << i + 1 << std::endl;
        world[i].showCageDetails();
        std::cout << std::endl;
    }
}

void Park::addDino()
{
}