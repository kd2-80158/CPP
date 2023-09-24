#ifndef MENU_H
#define MENU_H
#include<iostream>
using namespace std;
enum Emenu
{
  EXIT,
  USE_GETTER,
  USE_SETTER,
  PARAMETERIZED_CTOR
};
Emenu menu();
#endif