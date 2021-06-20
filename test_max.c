#include <stdio.h>
#include <assert.h>


int max(int y[], int m)
{ int max=y[0];
    for(int i=0;i<m;++i)
    { if(y[i]>max) max=y[i];
     else continue;}
 return max;
}
      
  

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
