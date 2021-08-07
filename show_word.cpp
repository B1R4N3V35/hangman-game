#include <iostream>
#include "show_word.h"

void show_word(std::string &secret_word, std::map<char, bool> &guessed) {

  std::cout << "Secret word: ";

  for (char letter : secret_word) {

    if (guessed[letter])
      std::cout << letter << " ";
    else
      std::cout << "_ ";

  }

  std::cout << std::endl;

}