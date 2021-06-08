#ifndef PARK_HPP
#define PARK_HPP
#include "Cage.hpp"

class Park
{

private:
    Vector<Cage> world;

    size_t grassFood = 0;
    size_t fishFood = 0;
    size_t meatFood = 0;
    size_t personal = 0;
    bool isDinoTypeComparableWithCageClimate(String dType, String cClimate);
    void addCageIfThereIsNotAnyForTheNewDino(Dinosaur);
    String classToClimate(String dinoClass);
    Cage randomCage();
    void showEmptyCages() const;
    void showNonEmptyCages() const;
    void showNonFullCages() const;

public:
    Park();
    Park(size_t cntCages);
    bool emptyPark();
    void showJurassicWorld() const;
    void addDino();
    void addDino(Dinosaur);
    void addDinoConsole();
    void removeDino();
    void addCage(Cage);
    void showCages() const;
    void addCage(String, String, size_t);
    void addCageFromConsole();
    void addRandomCage();
    void addFood();
    void addPersonal();
    void serialize(std::ofstream &ofs) const;
    void checkFood() const;
    void checkPersonal() const;
};

#endif