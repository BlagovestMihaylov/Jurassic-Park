#ifndef LARGECAGE_HPP
#define LARGECAGE_HPP

#include <iostream>
#include "String.hpp"
#include "Vector.hpp"
#include "Dinosaur.hpp"

#include "Cage.hpp"

class LargeCage : public Cage
{
private:
size_t largeSize = 1;

public:
LargeCage();
LargeCage(String, String, size_t);
};

#endif