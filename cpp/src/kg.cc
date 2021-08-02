/**
 * Quickly convert kilograms to pounds.
 * 
 * Author: Ken Ingram
 * Date: 2021-07-26 1052 PDT
 * Version 0.0.1
 * */

#include <iostream>
#include <string.h>
#include <typeinfo>
#include <cmath>
using namespace std;

int main (int argc, char *argv[]) {
  double kilo = atof(argv[1]);
  double pounds = 2.2 * kilo;

  printf("%.2f kg is %.3f pounds\n", kilo, pounds);
}
