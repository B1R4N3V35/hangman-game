#include "draw_header.h"
#include "spacing_title.h"
#include "draw_line.h"

void draw_header(std::string title) {

  std::string new_title = spacing_title(title);
  int length = new_title.size() + 8;

  draw_line('=', length);
  std::cout << "=   " << new_title << "   =" << std::endl;
  draw_line('=', length);

}