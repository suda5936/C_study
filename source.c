#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size = 0;
	int num = 1;
	int vector = 1;
	int x = 0, y = -1;
	printf("배열의 크기 : ");
	scanf("%d", &size);
	int** array;
	array = (int**)malloc(sizeof(int*) * size);
	for (int g = 0; g < size; g++)
	{
		array[g] = (int*)malloc(sizeof(int) * size);
	}
	
	for (int a = 0; a < size; a++)
	{
		array[0][++y] = num++;
	}
	for (int i = size -1 ; i >0; i--)
	{
		for (int k =0;k < i ;k++)
		{
			x = x+ vector;
			array[x][y] = num++;
		}
		vector *= -1;
		for (int j = 0; j < i;j++)
		{
			y = y + vector;
			array[x][y] = num++;
		}
	}

	for (int q = 0; q < size; q++)
	{
		for (int w = 0; w < size; w++)
		{
			printf("%3d", array[q][w]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < size; i++) 
	{
		free(array[i]);
	}
	free(array);

	return 0;
}