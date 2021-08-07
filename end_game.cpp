#include <iostream>
#include "end_game.h"
#include "missed.h"
#include "add_word.h"

void end_game(std::string &secret_word, std::map<char, bool> &guessed, std::string &file_name) {

  std::cout << "Game ended!" << std::endl;
  std::cout << "The secret word was " << secret_word << std::endl;

  if (missed(secret_word, guessed)) {

    std::cout << "Game over! Try again!" << std::endl;

  } else {

    std::cout << "Congratulations! You guessed the secret word!" << std::endl;

    char answer;
    std::cout << "Do you want to add a new word to the bank (Y/N)?" << std::endl;
    std::cin >> answer;

    if (answer == 'Y' || answer == 'y')
      add_word(file_name);
    else
      std::cout << "Thanks for playing!" << std::endl;

  }


}