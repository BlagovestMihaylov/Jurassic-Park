#include "../include/Dinosaur.hpp"
#include "../include/String.hpp"
#include "../include/Vector.hpp"
#include "../include/Cage.hpp"

int main()
{
    Dinosaur dino1("Berai","Dali", "Shte", "Zahape" , "Qna");
    //std::cout<<dino1<<std::endl;
    Cage cg1("HELLO", "THERE" , 3);


    
    cg1.addDinoConsole();
    cg1.showDinos();
    cg1.addDinoConsole();
    cg1.showDinos();
    cg1.addDinoConsole();
    cg1.showDinos();
    cg1.addDinoConsole();
    cg1.showDinos();
    cg1.addDinoConsole();
    cg1.showDinos();



    return 0;
}