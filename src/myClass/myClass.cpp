/* --------------------------- INCLUSIONS -------------------------- */
#include "myClass.hpp"


/* ---------------- STATIC VARIABLES INITIALIZATION ---------------- */
unsigned short myClass::spro_u16NbrofObjects = (unsigned short)0;


/* ------------------ PUBLIC FUNCTIONS DEFINITION ------------------ */
void myClass::setVar(
    unsigned char u8Arg)
{
  this->mpro_u8Var = u8Arg;
}

bool myClass::increaseVar(
        unsigned char u8Arg)
{
  bool bReturnValue;

  if(this->mpro_u8Var < (unsigned char)255)
  {
    this->mpro_u8Var += u8Arg;
    bReturnValue = true;
  }
  else
  {
    bReturnValue = false;
  }

  return bReturnValue;
}

unsigned char myClass::getVar(void)
{
  return this->mpro_u8Var;
}

unsigned short myClass::getNbrOfObjects(void)
{
  return spro_u16NbrofObjects;
}

myClass::myClass(
    unsigned char u8Arg)
{
  this->mpro_u8Var = u8Arg;

  if(spro_u16NbrofObjects < (unsigned short)65535)
  {
    spro_u16NbrofObjects += (unsigned short)1;
  }
  else
  {
    /* Nothing to be done */
  }
}

myClass::~myClass()
{
  if(spro_u16NbrofObjects > (unsigned short)0)
  {
    spro_u16NbrofObjects -= (unsigned short)1;
  }
  else
  {
    /* Nothing to be done */
  }
}


/* ----------------- PROTECTED FUNCTIONS DEFINITION ---------------- */
