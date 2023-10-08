#include <iostream>

using namespace std;

int str_len(const char* str) {
    int length = 0;
    while (*str != '\0') {
        ++length;
        ++str;
    }
    return length;
}

int main() {
    const char* myString = "James\0";
    int length = str_len(myString);

    cout << "Length of the string: " << length << endl;

    return 0;
}
