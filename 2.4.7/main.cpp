#include <iostream>

void strcat(char *to, const char *from)
{
    int i = 0;
    while(to[i++] != '\0');

    i--;
    int j = 0;
    while((to[i++] = from[j++]) != '\0');
    to[i] = '\0';
}

int main() {
    char str[14] = "Hello, ";
    strcat(str, "World!");

    for (int i = 0; i < 14; ++i) {
        std::cout << str[i] << std::endl;
    }

    return 0;
}