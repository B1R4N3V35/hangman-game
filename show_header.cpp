#include "show_header.h"
#include "draw_header.h"
#include "draw_line.h"
#include "spacing_title.h"

void show_header(std::string title, int max_attempts) {

  std::string new_title = spacing_title(title);
  
  draw_header(title);
  std::cout << "Max errors: " << max_attempts << std::endl;
  draw_line('-', new_title.size() + 8);

}