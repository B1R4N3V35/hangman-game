#include <iostream>
#include <string>
#include <vector>
#include "add_word.h"
#include "read_file.h"
#include "save_file.h"
#include "sort.h"

void add_word(std::string &file_name) {

  std::string new_word;
  std::cout << "Type the new word from the theme you chose (capital letters only, no spaces): ";
  std::cin >> new_word;

  std::vector<std::string> words_list = read_file(file_name);
  words_list.push_back(new_word);
  sort(words_list);

  save_file(words_list, file_name);

  std::cout << "Your word was added to the bank. Thanks!" << std::endl;

}