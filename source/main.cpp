#include "../include/Park.hpp"

int main()
{
  // Dinosaur dino1("Berai", "Dali", "Shte", "Zahape", "Qna");
  // //std::cout<<dino1<<std::endl;
  // Cage cg1("HELLO", "THERE", 3);
  // Cage cg2;

  //  cg1.addDino(dino1);
  //cg2.addDinoConsole();

  // std::ifstream in("Cages.txt");
  // std::ofstream out("CagesOut.txt");

  // cg1.serialize(out);

  Park parking;
  parking.showCages();

  return 0;
}