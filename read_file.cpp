#include <iostream>
#include <fstream>
#include "read_file.h"

std::vector<std::string> read_file(std::string &file_name) {

  std::ifstream file;
  file.open(file_name);

  if (file.is_open()) {

    int number_of_words;
    file >> number_of_words;

    std::vector<std::string> word_bank;

    for (int i = 0; i < number_of_words; i++) {

      std::string read_word;
      file >> read_word;
      word_bank.push_back(read_word);

    }

    file.close();
    return word_bank;

  } else {

    std::cout << "It was not possible to access the word bank." << std::endl;
    exit(0);

  }

}