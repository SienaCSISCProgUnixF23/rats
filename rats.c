#include <stdio.h>
#include <stdlib.h>
#include "ratio.h"

int main(int argc, char *argv[]) {

  ratio *r;
  ratio *a[2];
  ratio **l;

  r = create_ratio(1, 2);
  a[0] = create_ratio(1, 3);
  a[1] = create_ratio(1, 4);

  l = (ratio **)malloc(2 * sizeof(ratio *));
  l[0] = create_ratio(1, 5);
  l[1] = create_ratio(1, 6);
  
  // HERE

  // FREE STUFF
  return 0;
}

