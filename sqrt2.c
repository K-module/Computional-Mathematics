#A (finite) approximation of the infinite idea of the square root of 2.
#By K-module

#include <stdio.h>
#include <stdlib.h>

double sqrt2(double approx, int steps)
{
  for (int i=0; i<steps; ++i) {
  approx = .5*(approx + (2/approx)); 
  printf("[ Step %d ] %.50f\n", i, approx);
  }
}

int main(int argc, char **argv)
{
  if (argc < 3) {
  printf("%s <first guess> <steps>\n", argv[0]);
  return -1;
  }

  double first 	= atof(argv[1]);
  int steps     = atoi(argv[2]);

  sqrt2(first, steps);

  return 0;
}
