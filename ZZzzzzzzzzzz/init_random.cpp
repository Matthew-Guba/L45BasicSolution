#include"util.h";

void init_random(int* arr, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; ++i) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

string to_str(int* arr, int size) {
    string result = "[";
    for (int i = 0; i < size; ++i) {
        result += to_string(arr[i]);
        if (i < size - 1) {
            result += ", ";
        }
    }
    result += "]";
    return result;
}