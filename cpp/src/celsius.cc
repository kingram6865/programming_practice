/**
 * Quickly convert celsius to fahrenheit.
 * 
 * Author: Ken Ingram
 * Date: 2021-07-17 2233 PST
 * Version 0.0.1
 * */

#include <iostream>
#include <string.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main (int argc, char *argv[]) {
  double celsius = atof(argv[1]);
  double fahr = (9/5) * celsius + 32;

  printf("%.2f Celsius is %.3f Fahrenheit\n", celsius, fahr);
}


