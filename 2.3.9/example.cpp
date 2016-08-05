#include <iostream>


void toZero(int mass[], int length) {
    int res[7];
    for (int i = 0; i < length; ++i) {
        res[i] = 0;
    }



    for (int j = 0; j < length; ++j) {
        mass[j] = res[j];
    }
}


//int main() {
//    int mass[] = {1, 2, 3, 4, 5, 6, 7};
//    toZero(mass, 7);
//    for (int i = 0; i < 7; ++i) {
//        std::cout << *(mass + i) << " ";
//    }
//    return 0;
//}