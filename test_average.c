#include <stdio.h>
#include <assert.h>


float average(int A[], int k)
{	int aver=0;
int d=0;
int f=0;
	while(f!=k)
	{ d+=A[f];
		f++;}
		aver=d/k;
		return aver;
		}
	
	

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
