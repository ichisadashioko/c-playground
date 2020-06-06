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

  for (unsigned int i = 0; i < numIterations; i++) {
    if (x != NULL) {
      free(x[0].CharArray);
      free(x[0].IntArray);
    }

    free(x);
    x = (STRUCT_WITH_POINTER_A*)malloc(sizeof(STRUCT_WITH_POINTER_A));

    x[0].IntArray = (int*)malloc(sizeof(int) * numElements);
    x[0].CharArray = (char*)malloc(sizeof(char) * numElements);
  }

  return 0;
}