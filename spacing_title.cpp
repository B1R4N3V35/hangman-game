#include "spacing_title.h"

std::string spacing_title(std::string title) {

  std::string spaced_words = "";

  for (char letter : title) {

    if (letter == ' ') {

      spaced_words += "    ";

    } else {

      spaced_words += letter + (std::string)" ";

    }

  }

  return spaced_words;

}