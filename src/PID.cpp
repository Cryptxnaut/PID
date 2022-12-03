
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "main.h"

double wheelDiameter = 3.25;
double distance;

double getDesiredRotations(wheelDiameter, distance){
  double circumference = (M_PI * wheelDiameter);
  double revolutions = distance / circumference;
  return revolutions
}
