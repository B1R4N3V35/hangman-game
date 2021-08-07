#include <iostream>
#include "guess.h"
#include "letter_exists.h"

void guess(std::map<char, bool> &guessed, std::vector<char> &missed_guesses, std::string &secret_word) {

  char guess_char;
  std::cout << "Your guess: ";
  std::cin >> guess_char;
  std::cout << std::endl;

  guessed[guess_char] = true;

  if (! letter_exists(guess_char, secret_word))
    missed_guesses.push_back(guess_char);

}