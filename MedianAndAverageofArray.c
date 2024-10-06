#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void MedianAndAverage(double t[], int size, double* average, double* median) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += t[i];
	}
	*average = sum / size;
	int min, p, j;
	double temp;
	for (int p = 0; p < size; p++)
	{
		min = p;
		for (int j = p + 1; j < size; j++)
		{
			if (t[j] < t[min])
				min = j;
		}
		temp = t[p];
		t[p] = t[min];
		t[min] = temp;
	}
	int mid = size / 2;
	*median = t[mid];
}

void main() {
	double values[15] = { 7.7, 1001.2, 654.7, 12.8, 0.91, 15.102, 812.5, 121.6, 382.1,
						  40.1, 452.0, 128.2, 544.6, 23.2, 750.1 };
	double avg, med;
	MedianAndAverage(values, 15, &avg, &med);
	printf("Average: %lf Median: %lf", avg, med);
}