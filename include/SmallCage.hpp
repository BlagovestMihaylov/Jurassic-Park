#ifndef SMALLCAGE_HPP
#define SMALLCAGE_HPP

#include <iostream>
#include "String.hpp"
#include "Vector.hpp"
#include "Dinosaur.hpp"

class SmallCage
{

private:
    String climat;
    String era;
    const size_t maxSize = 1;
    Vector<Dinosaur> dinos;

public:
    void adDino(Dinosaur);
    void removeDino(Dinosaur);
    void removeDino(size_t);
};

#endif