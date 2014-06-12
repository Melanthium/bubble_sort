#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <stdint.h>

// Заполение массива рандомными числами
void filling_array(int *array, int N)
{
	int i;
	for (i=0; i<N; i++)
		array[i] = rand();
}

// Метод пузырька
void bubble_sort(int *array, int N)
{
	int i, j, temp;
	for(i=0; i<N; i++)
		for(j=0; j<(N-i-1); j++)
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
}

void main()
{
	int *array;
	int i, N;

	setlocale(LC_ALL, "Russian");

	printf("Введите размер массива: ");
	scanf("%d", &N);

	array = (int *) malloc(N * sizeof(int));

	filling_array(array, N);

	printf("Исходный массив: ");
	for (i=0; i<N; i++)
		printf("%d ", array[i]);

	bubble_sort(array, N);

	printf("\n\n");
	printf("Пузырьковая сортировка: ");
	for (i=0; i<N; i++)
		printf("%d ", array[i]);

	free(array);
	_getch();
}
