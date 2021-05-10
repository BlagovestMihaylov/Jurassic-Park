#include <iostream>
#include "Dinosaur.hpp"
#include "String.hpp"
#include "Vector.hpp"


class Cage
{
private:
String climat;
String era;
Vector<Dinosaur> dinos;

public:
Cage();
Cage(String climat, String era);
void addDino(Dinosaur);
void removeDino(Dinosaur);
void removeDino(size_t);


};