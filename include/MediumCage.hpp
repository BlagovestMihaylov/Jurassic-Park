#ifndef MEDIUMCAGE_HPP
#define MEDIUMCAGE_HPP

#include <iostream>
#include "String.hpp"
#include "Vector.hpp"
#include "Dinosaur.hpp"

#include "Cage.hpp"

class MediumCage : public Cage
{
private:
    size_t mediumSize = 1;

public:
    MediumCage();
    MediumCage(String, String, size_t);
};

#endif