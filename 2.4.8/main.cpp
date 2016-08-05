#include <iostream>

unsigned strlen(const char *str)
{
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}


int strstr(const char *text, const char *pattern)
{
    int i = 0;
    while (text[i] != '\0') {

        if (text[i] == pattern[0] && strlen(&text[i]) >= strlen(pattern)) {
            bool hasCatched = true;
            for (int j = 0; j < strlen(pattern); ++j) {
                if (text[i+j] != pattern[j]) {
                    hasCatched = false;
                }
            }
            if (hasCatched) {
                return i;
            }
        }


        i++;
    }
    return -1;
}

int main() {
    char str[] = "Hello, World!";

    std::cout << strstr(str, "!") << std::endl;
    return 0;
}