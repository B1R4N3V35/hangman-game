#include <iostream>
#include "show_missed.h"

void show_missed(std::vector<char> &missed_guesses) {

  std::cout << "Missed: ";

  for (char letter : missed_guesses) {

    std::cout << letter << " ";

  }

  std::cout << std::endl;

}