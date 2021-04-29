#ifndef MEDIUMCAGE_HPP
#define MEDIUMCAGE_HPP

#include <iostream>
#include "String.hpp"
#include "Vector.hpp"
#include "Dinosaur.hpp"

class SmallCage
{

private:
    String climat;
    String era;
    const size_t size = 3;
    Vector<Dinosaur> dinos;

public:
    void adDino(Dinosaur);
    void removeDino(Dinosaur);
    void removeDino(size_t);
};

#endif