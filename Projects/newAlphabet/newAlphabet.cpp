#include <iostream>
#include <string>
using namespace std;

string game(const char* input){
    string output = "";
    char letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string new_letters[26] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

    for (const char* c = input; *c; c++){
        bool added_value = false;
        for (int i = 0; i < 26; i++) {
            if (*c == letters[i] || *c == (char) toupper(letters[i])){
                output.append(new_letters[i]);
                added_value = true;
                break;
            } else {
                continue;
            }
        }
        if (added_value == true){
            continue;
        } else {
            string s = string(1,*c);
            output.append(s);
        }

    }
    return output;
}


int main(){
    string line;
    getline(cin, line);
    cout << game(line.c_str()) << endl;
    return 0;
}

