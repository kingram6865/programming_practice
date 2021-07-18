/**
 * This code calculates the total estimated processing time for a set of records given the 
 * number of records per batch (batch), time increment for processing (interval) and total # of records
 * (total_records).
 * 
 *  Author:  Ken Ingram
 *    Date:  2021-07-17 1848 PST
 * Version:  0.0.1
 * */

#include <iostream>
#include <string.h>
#include <typeinfo>
#include <cmath>
using namespace std;
/**
 * a = batch
 * b = interval
 * c = # of records being processed
 * */
int calculate(int a, int b, int c);

int main (int argc, char *argv[]) {
  int batch = atoi(argv[1]);
  int interval = atoi(argv[2]);
  int total_records = atoi(argv[3]);

  calculate(batch, interval, total_records);

  return 1;
}

int calculate(int a, int b, int c) {
  int sec = 60, min = 60, day = 24;
  int rate = (a * sec * min)/b;

  double result = (double)c/(double)rate;
  double hour_whole = floor(result);
  double hour_fraction = result - hour_whole;

  double minutes = hour_fraction * 60;
  double minutes_whole = floor(minutes);
  double minutes_fraction = minutes - minutes_whole;

  double seconds = minutes_fraction * 60;
  double seconds_whole = floor(seconds);


  printf("\n%d records per %d seconds => %d records per hour.\n", a, b, rate);

  if (result < 1.00) {
    printf("So, %d records will process in %.0f minutes %.0f seconds.\n\n", c, minutes_whole, seconds_whole);
  } else {
    printf("So, %d records will process in %.0f hours %.0f minutes %.0f seconds.\n\n", c, result, minutes, seconds);
  }

  // printf("result: %f, Hours Whole Part: %f, Hours Decimal Part: %f \n", result, hour_whole, hour_fraction);
  // printf("Minutes: %f, Minutes Whole Part: %f, Minutes Fractional Part: %f\n", minutes, minutes_whole, minutes_fraction);
  // printf("Seconds: %f,  Seconds Whole Part: %f\n\n", seconds, seconds_whole);

  return result;
}