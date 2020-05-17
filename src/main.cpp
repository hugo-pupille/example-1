#include <stdio.h>

#include "myClass.hpp"


int main()
{
  unsigned char u8Var;
  unsigned short u16NbrOfObjects;
  myClass myInstance = myClass();

  u8Var = myInstance.getVar();
  printf("myInstance.getVar() : %u \n", u8Var);
  u16NbrOfObjects = myInstance.getNbrOfObjects();
  printf("myInstance.getNbrOfObjects() : %u \n", u16NbrOfObjects);
} 