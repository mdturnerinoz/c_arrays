/*

  This small program can be used to view how a 2-dimenstional array works.
  This particular example works using fixed initialization of the variables.

 */

#include <stdio.h>

int main ()
{
    /* an array with 5 rows and 2 columns*/
    int a[5][2] = { {0,0}, {1,2}, {3,4}, {5,6},{7,8}};
    int i, j;

    /* output each array element's value */
    for ( i = 0; i < 5; i++ )
    {
        for ( j = 0; j < 2; j++ )
        {
            printf("a[%d][%d] = %d\n", i,j, a[i][j] );
        }
    }
    return 0;
}
