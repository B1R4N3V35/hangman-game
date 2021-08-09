#include "search.h"

int search(std::vector<std::string> &list, std::string word) {

  int size = list.size();
  int end = size - 1;
  int start = 0;

  while (start <= end) {

    int half = (start + end) / 2;

    if (list[half] < word) {

      start = half + 1;

    } else {

      if (list[half] > word) {

        end = half - 1;

      } else {

        return half;

      }

    }

  }

  return -1;

}