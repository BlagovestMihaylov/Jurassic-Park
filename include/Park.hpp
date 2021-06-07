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
    size_t personal;
    bool isDinoTypeComparableWithCageClimate(String dType, String cClimate);
    void addCageIfThereIsNotAnyForTheNewDino(Dinosaur);

    Cage randomCage();

public:
    Park();
    Park(size_t cntCages);
    void showJurassicWorld() const;
    void addDino();
    void removeDino();
    void addCage(Cage);
    void showCages() const;
    void addCage(String, String, size_t);
    void addCageFromConsole();
    void addRandomCage();
};

#endif