#include <stdio.h>

void recursefunc(int index) {
  index += 1;
  printf("%d: %p \n", index, &index);
  recursefunc(index);
}

int main() {
  int index = 0;
  recursefunc(index);
  return 0;
}