#include "util.h"

int count_local_min(int* pointer, int size);
int* find_index_min(int* pointer, int size, int* counter);
int count_local_max(int* pointer, int size);
int* find_index_max(int* pointer, int size, int* counter);

int count_local_min(int* pointer, int size) {
	int count = 0;
	for (int i = 0; i < size - 1; i++) {
		if (pointer[i] < pointer[i + 1] && pointer[i - 1] > pointer[i]) {
			count++;
		}
	}
	return count;
}
int* find_index_min(int* pointer, int size, int* counter) {
	*counter = count_local_min( pointer, size);
	int* indixes = new int[*counter];
	int j = 0;

	if (size > 1 && pointer[0] < pointer[1]) {
		*indixes = 0;
		j++;
	}

	int n = size - 1;
	for (int i = 0; i < n; i++) {
		if (pointer[i] < pointer[i + 1] && pointer[i - 1] > pointer[i]) {
		*(indixes + j)= i;
		j++;
		}
	}
	return indixes;
}