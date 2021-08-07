#include "missed.h"

bool missed(std::string &secret_word, std::map<char, bool> &guessed) {

  for (char letter : secret_word) {

    if (! guessed[letter])
      return true;

  }

  return false;

}