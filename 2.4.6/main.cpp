#include <iostream>

size_t strlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {

    std::cout << strlen("Hello, World!") << std::endl;
    return 0;
}