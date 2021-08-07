#include <iostream>
#include "show_spaces.h"

void show_spaces(std::string &secret_word) {

  std::cout << std::endl << "Secret word: ";

  for (char letter : secret_word) {

    std::cout << "_ ";

  }

  std::cout << std::endl << std::endl;

}