#include "sort.h"

void sort(std::vector<std::string> &list) {

  std::string aux;
  int last, i;
  int size = list.size();

  for (last = size - 1; last > 0; last--) {

    for (i = 0; i < last; i++) {

      if (list[i] > list[i + 1]) {

        aux = list[i];
        list[i] = list[i + 1];
        list[i + 1] = aux;

      }

    }

  }

}