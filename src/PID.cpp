
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "main.h"

double wheelDiameter = 3.25;
double distance;
////////////////////////////
double kP = 0.0;
double kI = 0.0;
double kD = 0.0;

double error;
double prevError = 0;
double proportional;
double intergral;
double derivative;



double getDesiredRotations(wheelDiameter, distance){
  double circumference = (M_PI * wheelDiameter);
  double revolutions = distance / circumference;
  return revolutions
}
