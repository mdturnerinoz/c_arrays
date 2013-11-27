#include <stdio.h>

int main ()
{
    /* an array with 5 rows and 3 columns*/
    int a[2][2][2] = { {0,0,0}, {1,2,3} };
    int i, j, k;

    /* output each array element's value */
    for ( i = 0; i < 2; i++ )
    {
        for ( j = 0; j < 2; j++ )
        {
            for ( k=0; k < 2; k++)
                printf("a[%d][%d][%d] = %d\n", i,j,k, a[i][j][k] );
        }
    }
    return 0;
}
