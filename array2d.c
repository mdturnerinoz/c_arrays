/*

  This small program can be used to view how a 2-dimenstional array works.

  This particular example works using dynamic initialization of the variables.

  The goodness with dynamic initialization is that if the dimension(s) of the 
  array are modified, the initialization need not be changed. Note also, that
  an even better solution would be to pass the array dimensions in via argc
  and argv (via main) which would be totally dynamic; this would mean though
  that the definition of the values would need to go from fixed-compiled to
  variable via malloc/calloc.

 */



#include <stdio.h>

#define DIMENSION1 3
#define DIMENSION2 6

int main ()
{
    /* an array with 5 rows and 2 columns*/
    int a[DIMENSION1][DIMENSION2];
    int i, j, c;

    /* output each array element's value */
    for ( i = 0, c = 1; i < DIMENSION1; i++, ++c )
    {
        for ( j = 0; j < DIMENSION2; j++)
        {
			a[i][j] = c;
            printf("a[%d][%d] = %d\n", i,j, a[i][j] );
        }
    }
    return 0;
}
