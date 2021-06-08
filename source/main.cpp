#include "../include/Park.hpp"

int main()
{
  Dinosaur dino1("NAME", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  Dinosaur dino2("HEHEBOII", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  Dinosaur dino3("HUEHUE", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  Dinosaur dino4("HEH", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  Dinosaur dino5("THERE", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  Dinosaur dino6("HELLO", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // //std::cout<<dino1<<std::endl;
  Cage cg1("HYDRO", "JURASSIC", 3);
  cg1.addDinoConsole();
  // Cage cg2;

  srand(time(0));
  //  cg1.addDino(dino1);
  //cg2.addDinoConsole();

  std::ofstream in("Cages.txt");
  std::ofstream out("CagesOut.txt");

  // cg1.serialize(out);

  Park parking;
  //parking.showCages();
  //parking.addDino();
  // parking.addDino(dino2);
  // parking.addDino(dino3);
  // parking.addDino(dino4);
  // parking.addDino(dino5);
  // parking.addDino(dino6);
  // parking.showJurassicWorld();
  // parking.removeDino();
  // parking.showJurassicWorld();
  // parking.checkFood();
  // parking.checkPersonal();

  return 0;
}