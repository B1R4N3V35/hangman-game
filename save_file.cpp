#include <iostream>
#include <fstream>
#include "save_file.h"

void save_file(std::vector<std::string> &new_list, std::string &file_name) {

  std::ofstream file;
  file.open(file_name);

  if (file.is_open()) {

    file << new_list.size() << std::endl;

    for (std::string word : new_list) {

      file << word << std::endl;

    }

    file.close();

  } else {

    std::cout << "It was not possible to access the word bank." << std::endl;
    exit(0);

  }

}