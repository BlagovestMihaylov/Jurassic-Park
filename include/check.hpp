#include <stdlib.h>
#include "../include/String.hpp"

namespace check
{
    String toValidInputFormat(String s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= ('z' - 'Z');
            }
        }
        return s;
    }

    bool isValidGender(String gender)
    {
        if (toValidInputFormat(gender) == "MALE" || toValidInputFormat(gender) == "FEMALE")
        {
            return true;
        }
        return false;
    }

    bool isValidEra(String era)
    {
        if (toValidInputFormat(era) == "TRIASSIC" || toValidInputFormat(era) == "CRETACEOUS" || toValidInputFormat(era) == "JURASSIC")
        {
            return true;
        }
        return false;
    }

    bool isValidType(String type)
    {
        if (toValidInputFormat(type) == "HERBIVORE" || toValidInputFormat(type) == "CARNIVORE" || toValidInputFormat(type) == "FLYING" || toValidInputFormat(type) == "AQUATIC")
        {
            return true;
        }
        return false;
    }

    bool isValidClimate(String climate)
    {
        if (toValidInputFormat(climate) == "LAND" || toValidInputFormat(climate) == "AERIAL" || toValidInputFormat(climate) == "HYDRO")
        {
            return true;
        }
        return false;
    }

    bool isValidFood(String food)
    {
        if (toValidInputFormat(food) == "GRASS" || toValidInputFormat(food) == "MEAT" || toValidInputFormat(food) == "FISH")
        {
            return true;
        }
        return false;
    }

    bool isValidSize(size_t size)
    {
        if (size == 1 || size == 3 || size == 10)
            return true;
        else
            return false;
    }

    bool isDinoTypeComparableWithCageClimate(String dType, String cClimate)
    {
        if ((dType == "HERBIVORE" && cClimate == "LAND") || (dType == "CARNIVORE" && cClimate == "LAND") || (dType == "FLYING" && cClimate == "AERIAL") || (dType == "AQUATIC" && cClimate == "HYDRO"))
            return true;
        else
            return false;
    }

}
