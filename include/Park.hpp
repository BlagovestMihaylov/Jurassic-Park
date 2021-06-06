#ifndef PARK_HPP
#define PARK_HPP
#include "Cage.hpp"

class Park
{

private:
    Vector<Cage> world;

    size_t food;

    void addCageIfThereIsNotAnyForTheNewDino();
    void showCages();

public:

void showJurassicWorld() const;
void addDino();
void removeDino();
void addCage();


};

#endif