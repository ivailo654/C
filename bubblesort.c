#include <stdio.h>
#include <string.h>
int main()
{
	int A[] = { 5,6,4,1,3,2,9,7,8 };
	int size = sizeof(A) / sizeof(A[0]);
	int i, j, temp;
	for (i=0 ; i < size; i++)
	{
		for (j=0; j < size - 1; j++)
		{
			if (*(A+j) < *(A+j+1))
			{
				temp = *(A + j);
				*(A + j) = *(A + j + 1);
				*(A + j + 1) = temp;
			}
		}
	}
	for (int k = 0; k < size; k++)
		printf("%d", A[k]);
	return 0;
}