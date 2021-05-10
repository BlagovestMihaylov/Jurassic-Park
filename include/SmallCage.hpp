#ifndef SMALLCAGE_HPP
#define SMALLCAGE_HPP

#include <iostream>
#include "String.hpp"
#include "Vector.hpp"
#include "Dinosaur.hpp"
#include "Cage.hpp"

class SmallCage : public Cage
{
private:
size_t smallSize = 1;

public:
SmallCage();
SmallCage(String, String, size_t);
};

#endif