#include <iostream>
#include "Dinosaur.hpp"
#include "String.hpp"
#include "Vector.hpp"
#include <fstream>

class Cage
{
private:
    String climat;
    String era;
    Vector<Dinosaur> dinos;
    size_t cageSize;
    String cageType;

public:
    Cage();
    Cage(String climat, String era, size_t size);
    void addDino(Dinosaur);
    void addDinoConsole();
    void removeDino(size_t);

    String getEra() const;
    String getClimate() const;
    String getType() const;
    size_t getSize() const;

    void setEra(String);
    void setClimate(String);
    void setType(String);
    void setSize(size_t);

    void showDinos() const;
    void showCageDetails() const;

    void serialize(std::ofstream &ofs) const;
    void deserialize(std::ifstream &ifs);
};