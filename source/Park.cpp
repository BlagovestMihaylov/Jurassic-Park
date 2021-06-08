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
    srand(time(0));
    //////////////////////////
    int climate = rand() % 3;
    if (climate == 0)
        temp.setClimate("LAND");
    else if (climate == 1)
        temp.setClimate("HYDRO");
    else
        temp.setClimate("AERIAL");

    srand(time(0));
    //////////////////////////////
    int era = rand() % 3;
    if (era = 0)
        temp.setEra("JURASSIC");
    if (era = 1)
        temp.setEra("TRIASSIC");
    if (era = 2)
        temp.setEra("CREATECEOUS");

    srand(time(0));
    return temp;
}

void Park::addRandomCage()
{
    world.push(randomCage());
}

Park::Park()
{
    int maxCages = rand() % 11 + 3;
    for (int i = 0; i < maxCages; ++i)
    {
        addRandomCage();
        personal += 4;
        grassFood++;
        meatFood++;
        fishFood++;
    }
}

void Park::checkFood() const
{
    std::cout << "Grass: " << grassFood << std::endl;
    std::cout << "Meat: " << meatFood << std::endl;
    std::cout << "Fish: " << fishFood << std::endl;
}

void Park::checkPersonal() const
{
    std::cout << "There are " << personal << " people working here\n";
}

void Park::addFood()
{
    grassFood++;
    fishFood++;
    meatFood++;
}

void Park::addPersonal()
{
    personal += 4;
}

void Park::showJurassicWorld() const
{
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "Cage Number:" << i << std::endl;
        world[i].showCageDetails();
        std::cout << "Dinos here: \n";
        world[i].showDinos();
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
        std::cout << "Cage number: " << i << std::endl;
        world[i].showCageDetails();
        std::cout << std::endl;
    }
}

void Park::removeDino()
{
    showJurassicWorld();
    size_t temp;
    std::cout << "Select which cage is your dino: ";
    std::cin >> temp;
    size_t temp2 = temp;
    world[temp].showDinos();
    std::cout << "Select dino: ";
    std::cin >> temp;
    world[temp2].removeDino(temp);
    std::cout << "Deleted\n";
}

void Park::addDino(Dinosaur dino)
{
    bool flag = false;
    for (int i = 0; i < world.size(); i++)
    {
        if (isDinoTypeComparableWithCageClimate(dino.getClass(), world[i].getClimate()) && dino.getEra() == world[i].getEra())
        {
            flag = true;
            world[i].addDino(dino);
            break;
        }
    }
    if (flag == false)
    {
        addCageIfThereIsNotAnyForTheNewDino(dino);
        world[world.size()].addDino(dino);
    }
}

void Park::addDino()
{
    size_t cg = 0;
    std::cout << "Select cage: \n";
    showCages();
    std::cin >> cg;
    world[cg].addDinoConsole();
}

void Park::serialize(std::ofstream &ofs) const
{
    for (int i = 0; i < world.size(); i++)
    {
        world[i].serialize(ofs);
        ofs << "\n";
    }
}