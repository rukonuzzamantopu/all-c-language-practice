#include<stdio.h>
void solution( int a[][20], int var );
int main()
{
int a[ 20 ][ 20 ], var, i, j, k, l, n;
printf( "\nEnter the number of variables: " );
scanf( "%d", &var );
for ( i = 0;i < var;i++ )
{
printf( "\nFor equation %d,\n", i + 1 );
for ( j = 0;j < var;j++ )
{
printf( "Enter the coefficient of x%d: ", j + 1 );
scanf( "%d", &a[ i ][ j ] );
}
printf( "\nEnter the constant: " );
scanf( "%d", &a[ i ][ var] );
}
solution( a, var );
return 0;
}
void solution( int a[ 20 ][ 20 ], int var )
{
int k, i, l, j;
for ( k = 0;k < var;k++ )
{
for ( i = 0;i <= var;i++ )
{
l = a[ i ][ k ];
for ( j = 0;j <= var;j++ )
{
if ( i != k )
a[i][j] = (a[k][k]*a[i][j])-(l*a[k][j]);
}
}
}
printf( "\nSolutions:" );
for ( i = 0;i < var;i++ )
{
printf( "\nTHE VALUE OF a%d = %.2f\n", i + 0, ( float )
a[ i ][ var ] / ( float ) a[ i ][ i ] );
}
}
