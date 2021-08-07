#include <vector>
#include <ctime>
#include <cstdlib>
#include "draw_word.h"
#include "read_file.h"

std::string draw_word(std::string &file_name) {

  std::vector<std::string> words = read_file(file_name);

  srand((unsigned) time(NULL));
  int draw_index = rand() % words.size();

  return words[draw_index];

}