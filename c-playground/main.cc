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
    x = new STRUCT_WITH_POINTER_A[1];

    lastIntArray = new int[numElements];
    x[0].IntArray = lastIntArray;

    lastCharArray = new char[numElements];
    x[0].CharArray = lastCharArray;
  }

  std::cout << "lastIntArray size: " << sizeof(lastIntArray) << std::endl;
  std::cout << "lastCharArray size: " << sizeof(lastCharArray) << std::endl;

  return 0;
}