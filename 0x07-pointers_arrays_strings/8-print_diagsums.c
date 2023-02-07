#include "main.h"
/**
* print_diagsums - prints sum of both diagonals of a
*			square matrix
* @a: Multidimensional array (square matrix)
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
int sum1, sum2, i, s;
sum1 = 0;
sum2 = 0;
s = size * size;
for (i = 0; i < s; i += size + 1)
sum1 += a[i];
for (i = size - 1; i < s - 1; i += size - 1)
sum2 += a[i];
printf("%d, %d\n", sum1, sum2);
}
