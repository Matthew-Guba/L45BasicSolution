#include"util.h"

int main() {
	int size;
	int* pointer;

	cout << "Input size of array ";
	cin >> size;

	pointer = new int[size];

	init_random(pointer, size, -10, 10);
	cout << "Array: " << to_str(pointer, size) << endl;

	int count;
	int* indixes = find_index_min(pointer, size, &count);
	cout << to_str(indixes, count);

	delete[] pointer;
	delete[] indixes;
	return 0;
}