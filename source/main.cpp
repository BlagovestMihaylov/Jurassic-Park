#include "../include/Park.hpp"
#include <thread>

size_t stringToNum(String str)
{
  if (str == "ADD")
    return 1;
  else if (str == "REMOVE")
    return 2;
  else if (str == "SEE")
    return 3;
  else if (str == "BUILD")
    return 4;
  else if (str == "FOOD")
    return 5;
  else if (str == "SAVE")
    return 6;
  else if (str == "EXIT")
    return 7;
  else
    return 0;
}

int main()
{
  srand(time(0));
  String command;
  bool exit = true;
  std::ofstream in("Cages.txt");
  std::ofstream out("CagesOut.txt");
  Park parking;

  std::cout << "Welcome to the Jurassic!\nThis is the place where the dinosaurs a alive once more\n";
  std::cout << "Please use caps lock for all the commands\n";

  do
  {
    std::cout << "LIST OF COMMANDS:\n";
    std::cout << "If you want to add a new dinosaur, please type \"ADD\" \n";
    std::cout << "If you want to remove a dinosaur, please type \"REMOVE\"\n";
    std::cout << "If you want to see all the dinos we have please type \"SEE\"\n";
    std::cout << "If you want to build a new cage, please type \"BUILD\"\n";
    std::cout << "If you want to add food, please type \"FOOD\"\n";
    std::cout << "If you want to save the park to file, please type \"SAVE\"\n";
    std::cout << "If you want to exit, please type \"EXIT\"\n";
    std::cin >> command;
    switch (stringToNum(command))
    {
    case 1:
    {
      parking.addDinoConsole();
      break;
    }
    case 2:
    {
      parking.removeDino();
      break;
    }
    case 3:
    {
      parking.showJurassicWorld();
      break;
    }
    case 4:
    {
      parking.addCageFromConsole();
      break;
    }
    case 5:
    {
      parking.addFood();
      break;
    }
    case 6:
    {
      parking.serialize(out);
      break;
    }
    case 7:
    {
      exit = false;
      std::cout << "Exiting\n";
      // std::this_thread::sleep_for(std::chrono::milliseconds(1500));
      // std::cout << ".";
      // std::this_thread::sleep_for(std::chrono::milliseconds(1500));
      // std::cout << ".";
      // std::this_thread::sleep_for(std::chrono::milliseconds(1500));
      // std::cout << ".";
      break;
    }
    default:
    {
      std::cout << "INVALID COMMAND\n";
    }
    }
  } while (exit);
  // Dinosaur dino1("NAME", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // Dinosaur dino2("HEHEBOII", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // Dinosaur dino3("HUEHUE", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // Dinosaur dino4("HEH", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // Dinosaur dino5("THERE", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // Dinosaur dino6("HELLO", "FLYING", "AYTOZAVROS", "CRETACEOUS", "FEMALE");
  // //std::cout<<dino1<<std::endl;
  // Cage cg1("HYDRO", "JURASSIC", 3);
  // cg1.addDinoConsole();
  // Cage cg2;

  //  cg1.addDino(dino1);
  //cg2.addDinoConsole();

  // cg1.serialize(out);

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