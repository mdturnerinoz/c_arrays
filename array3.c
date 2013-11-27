/*

  This small program can be used to view how a 3-dimenstional array works.

  This particular example works using fixed initialization of the variables.

  The problem with fixed initialization is that if the dimension(s) of the 
  array are modified (down), the initialization must be changed.

 */

#include <stdio.h>

#define DIMENSION1 2
#define DIMENSION2 2
#define DIMENSION3 2

int main ()
{
    /* an array with 5 rows and 3 columns*/
	    int a[DIMENSION1][DIMENSION2][DIMENSION3] = { {0,0,0}, {1,2,3} };
    int i, j, k;

    /* output each array element's value */
    for ( i = 0; i < DIMENSION1; i++ )
    {
        for ( j = 0; j < DIMENSION2; j++ )
        {
            for ( k=0; k < DIMENSION3; k++)
                printf("a[%d][%d][%d] = %d\n", i,j,k, a[i][j][k] );
        } 
    }
    return 0;
}
