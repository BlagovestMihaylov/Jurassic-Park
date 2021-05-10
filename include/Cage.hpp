#ifndef CAGE_HPP
#define CAGE_HPP


#include <iostream>
#include "Dinosaur.hpp"
#include "String.hpp"
#include "Vector.hpp"


class Cage
{
protected:
String climat;
String era;
Vector<Dinosaur> dinos;
size_t cageSize;

public:
Cage();
Cage(String climat, String era);
void addDino(Dinosaur);
void removeDino(Dinosaur);
void removeDino(size_t);


};

#endif