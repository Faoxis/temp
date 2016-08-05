#include <iostream>
using namespace std;

void shift(int *a, int size, int shift) {
    int res[size];

    if (size <= shift) {
        shift %= size;
    }

    for (int i = 0; i < size - shift; ++i) {
        res[i] = a[i + shift];
    }
    for (int i = 0; i < shift; ++i) {
        res[size - shift + i] = a[i];
    }

    for (int j = 0; j < size; ++j) {
        a[j] = res[j];
    }
}

//
int main() {
	// your code goes here

    int mass[] = {1, 2, 3, 4, 5};
    shift(mass, 5, 7);

    for (int i = 0; i < 5; ++i) {
        std::cout << *(mass + i) << " ";
    }

//    std::cout << shift(mass, 7, 2) << endl;
	return 0;
}