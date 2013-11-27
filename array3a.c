/*

  This small program can be used to view how a 3-dimenstional array works.

  This particular example works using dynamic initialization of the variables.

  The goodness with dynamic initialization is that if the dimension(s) of the 
  array are modified, the initialization need not be changed. Note also, that
  an even better solution would be to pass the array dimensions in via argc
  and argv (via main) which would be totally dynamic; this would mean though
  that the definition of the values would need to go from fixed-compiled to
  variable via malloc/calloc.

 */



#include <stdio.h>

#define DIMENSION1 2
#define DIMENSION2 3
#define DIMENSION3 4

int main ()
{
    /* an array with 5 rows and 2 columns*/
    int a[DIMENSION1][DIMENSION2][DIMENSION3];
    int i, j, k, c;

    /* output each array element's value */
    for ( i = 0, c = 1; i < DIMENSION1; i++, c = 1 )
    {
        for ( j = 0; j < DIMENSION2; j++)
        {
			for ( k = 0; k < DIMENSION3; k++)
	        {
			   a[i][j][k] = c++;
               printf("a[%d][%d][%d] = %d\n", i,j,k, a[i][j][k] );
            }
        }
    }
    return 0;
}
