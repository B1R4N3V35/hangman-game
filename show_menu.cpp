#include <iostream>
#include "show_menu.h"

std::string show_menu() {

  std::cout << "Choose game theme:" << std::endl;
  std::cout << std::endl;
  std::cout << "[1] Animals" << std::endl;
  std::cout << "[2] Cities" << std::endl;
  std::cout << "[3] Countries" << std::endl;
  std::cout << "[4] Food" << std::endl;
  std::cout << "> Your choice: ";

  int choice;
  std::cin >> choice;

  std::string file_name;

  switch (choice) {

    case 1:
      file_name = "_animals.wbk";
      break;
    
    case 2:
      file_name = "_cities.wbk";
      break;
    
    case 3:
      file_name = "_countries.wbk";
      break;
    
    case 4:
      file_name = "_food.wbk";
      break;

    default:
      std::cout << "Invalid choice!" << std::endl;
      exit(0);

  }

  return file_name;

}