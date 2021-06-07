#ifndef PARK_HPP
#define PARK_HPP
#include "Cage.hpp"

class Park
{

private:
    Vector<Cage> world;

    size_t grassFood;
    size_t fishFood;
    size_t meatFood;

    void addCageIfThereIsNotAnyForTheNewDino(Dinosaur);
    void showCages();
    Cage randomCage();

public:
    Park();
    Park(size_t cntCages);
    void showJurassicWorld() const;
    void addDino();
    void removeDino();
    void addCage();
    void addRandomCage();

    
};

#endif