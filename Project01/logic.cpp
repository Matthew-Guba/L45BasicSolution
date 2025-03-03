#include "util.h"

bool min_local(int* pointer, int size) {
	int flag = false;
	for (int i = 0; i < size - 1; i++) {
		if (pointer[i] < pointer[i + 1] && pointer[i-1] > pointer[i]) {
			flag = true;
			break;
		}
	}
	return flag;
}

bool max_local(int* pointer, int size) {
	int flag = false;
	for (int i = 0; i < size - 1; i++) {
		if (pointer[i] > pointer[i + 1] && pointer[i - 1] > pointer[i]) {
			flag = true;
			break;
		}
	}
	return flag;
}