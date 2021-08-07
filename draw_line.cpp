#include "draw_line.h"

void draw_line(char character, int length) {
  
  // The line must be at least 2 in length
  if (length < 2)
    length = 2;
  
  // The line must be at most 80 in length
  if (length > 80)
    length = 80;
  
  for (int i = 0; i < length; i++) {

    std::cout << character;

  }

  std::cout << std::endl;

}