#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;
void init_random(int* arr, int size, int minVal, int maxVal);
string to_str(int* arr, int size);

int count_local_min(int* pointer, int size);
int* find_index_min(int* pointer, int size, int* counter);
int count_local_max(int* pointer, int size);
int* find_index_max(int* pointer, int size, int* counter);