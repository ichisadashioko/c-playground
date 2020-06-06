#include <stdio.h>

#include <iostream>

struct STRUCT_WITH_POINTER_A {
  int* IntArray = NULL;
  char* CharArray = NULL;
};

int main() {
  unsigned int numElements = 10000;
  unsigned int numIterations = 32000;
  STRUCT_WITH_POINTER_A* x = NULL;

  int* lastIntArray = NULL;
  char* lastCharArray = NULL;

  for (unsigned int i = 0; i < numIterations; i++) {
    delete[] x;
    x = (STRUCT_WITH_POINTER_A*)malloc(sizeof(STRUCT_WITH_POINTER_A));

    lastIntArray = (int*)malloc(sizeof(int) * numElements);
    x[0].IntArray = lastIntArray;

    lastCharArray = (char*)malloc(sizeof(char) * numElements);
    x[0].CharArray = lastCharArray;
  }

  return 0;
}