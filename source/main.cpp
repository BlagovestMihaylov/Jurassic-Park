#include "../include/Park.hpp"

int main()
{
    Dinosaur dino1("Berai", "Dali", "Shte", "Zahape", "Qna");
    //std::cout<<dino1<<std::endl;
    Cage cg1("HELLO", "THERE", 3);
    Cage cg2;

    // cg1.addDinoConsole();
    // cg1.showDinos();
    // cg1.addDinoConsole();
    // cg1.showDinos();
    // cg1.addDinoConsole();
    // cg1.showDinos();
    // cg1.addDinoConsole();
    // cg1.showDinos();
    // cg1.addDinoConsole();
    // cg1.showDinos();

    std::ifstream in("Cages.txt");
    std::ofstream out("CagesOut.txt");

    cg2.deserialize(in);
    cg2.serialize(out);

    return 0;
}