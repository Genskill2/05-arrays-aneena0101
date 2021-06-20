#include <stdio.h>
#include <assert.h>



  int min(int y[], int m)
{ int min=y[0];
    for(int i=0;i<m;++i)
    { if(y[i]<max) max=y[i];
     else continue;}
 return min;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
