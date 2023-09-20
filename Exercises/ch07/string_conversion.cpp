#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string string_to_upper(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        char cUpper = toupper(c);
        result = result + cUpper;
    }
    return result;
}

string string_to_lower(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        char cLower = tolower(c);
        result = result + cLower;
    }
    return result;
}

int main() {
    string input = "Hola, como estas";  

    string upperResult = string_to_upper(input);
    string lowerResult = string_to_lower(input);

    cout << "Uppercase: " << upperResult << endl;
    cout << "Lowercase: " << lowerResult << endl;

    return 0;
}

