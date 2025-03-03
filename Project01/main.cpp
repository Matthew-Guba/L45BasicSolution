#include"util.h"
bool min_local(int* pointer, int size);
bool max_local(int* pointer, int size);

int main() {
	int size;
	int* pointer;

	cout << "Input size of array ";
	cin >> size;

	pointer = new int[size];

	init_random(pointer, size, -10, 10);
	cout << "Array: " << to_str(pointer, size) << endl;

	bool result = min_local(pointer, size);
	bool result1 = max_local(pointer, size);

	cout<<"MIN:)  --> " << (result ? "True" : "False") <<endl;
	cout<<"MAX:c  ==> " << (result1 ? "True" : "False");

	delete[] pointer;

	return 0;
}