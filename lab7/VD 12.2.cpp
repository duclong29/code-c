#include<stdio.h>
int main()
{
	int A[10][10], B[10][10], C[10][10];
	int row, col;
	int i, j;
	
	printf("\n Enter the dimension of the matrix:");
	scanf("%d%d", &row, &col);
	printf("\n Enter the value of the matrix A and B:\n");
	for(i=0; i<row; i++)
	for(j=0; j<col; j++)
	{
		printf("\n A[%d%d], B[5d5d]:", i, j, i, j);
		scanf("%d%d", &A[i][j], &B[i][j]);
		C[i][j] = A[i][j] + B[i][j];
		
	}
	    for(i=0; i<row; i++)
	    for(j=0; j<col; j++)
	    {
	    	printf("\n A[%d%,%d]=%d, B[%d,%d]=%d, C[%d,%d]=%d\n", i, j, A[i][j], B[i][j], C[i][j]);
		}
	
	return 0;
}
