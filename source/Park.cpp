#include "../include/SmallCage.hpp"
#include "../include/MediumCage.hpp"
#include "../include/LargeCage.hpp"
#include "../include/Dinosaur.hpp"
#include "../include/String.hpp"
#include "../include/Vector.hpp"
#include "../include/io.hpp"

int main()
{
    String ehoo = "Dino";
    String eh2 = DinoClassCheck(ehoo);
    std::cout << eh2 << std::endl;

    String s1;
    s1 = "Hello\n";
    std::cout << s1;
    return 0;
}