#ifndef DINOSAUR_HPP
#define DINOSAUR_HPP

#include "String.hpp"
#include <iostream>
#include <fstream>

class Dinosaur
{
private:
    String DinoName;
    String DinoType;
    String DinoEra;
    String DinoClass;
    String DinoSex;
    String DinoFood;

public:
    Dinosaur();
    Dinosaur(String, String, String, String, String);
    String getName() const;
    String getType() const;
    String getEra() const;
    String getClass() const;
    String getSex() const;
    String getFood() const;

    void setName(String);
    void setType(String);
    void setEra(String);
    void setClass(String);
    void setSex(String);
    void setFood(String);

    friend std::ostream &operator<<(std::ostream &,const Dinosaur &);
    void serialize(std::ofstream& ofs) const;
};

#endif