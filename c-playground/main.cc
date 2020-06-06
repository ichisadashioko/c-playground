#include <stdio.h>

#include <iostream>

struct STRUCT_WITH_POINTER_A {
  int* IntArray = NULL;
  char* CharArray = NULL;
};

int main() {
  unsigned int numElements = 10000;
  unsigned int numIterations = 32000;
  STRUCT_WITH_POINTER_A x;

  for (unsigned int i = 0; i < numIterations; i++) {
    x.IntArray = (int*)malloc(sizeof(int) * numElements);
    x.CharArray = (char*)malloc(sizeof(char) * numElements);
  }

  return 0;
}