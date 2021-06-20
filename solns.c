/* Enter your solutions in this file */

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

#include <stdio.h>
#include <assert.h>



  int min(int y[], int m)
{ int min=y[0];
    for(int i=0;i<m;++i)
    { if(y[i]<min) min=y[i];
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

#include <stdio.h>
#include <assert.h>


int mode(int num[], int k1)
{
	int mod,nos,d;
	mod=nos=d=0;
	int f[k1],er[k1];
	int k=k1;
	if(k!=1)
	{
		for(int r=0;r<k;++r)
		{	d=num[0];
				for(int e=r+1;e<k;++e)
				{   if(d==num[e]) {nos++; 
				num[e]=num[e+1];
				k-=1;
				}
				er[r]=nos;
				f[r]=num[r];
				}
				} 
				for(int w=0;w<k1;++w)
				{ mod=er[0]; d=0;
					if(mod<er[w]) { mod=er[w]; d=w;}
					}
					return f[d];
					}
	else {d=num[0];
		return d;
		}
	
			
					}
					
		

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  
  }
