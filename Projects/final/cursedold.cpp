#include <ncurses.h>
#include <menu.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <vector>
using namespace std;

struct File{
	char perms;
	char hardlinks;
	char owner;
	char group;
	char size;
	char mod_time;
	char name;

	File(char p, char ln, char o, char g, char s, char mt, char n);
};

vector<string> lsdir() {
	char cmd[] = "ls -lah";
    array<char, 128> buffer;
    string result;
	vector<string> output;
    unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        output.push_back(buffer.data());
    }
	return output;
}
string index(string str, int s, int e){
	string result = "";
	for (int i = s; i < e; i++){
		result += str[i];
	}
	return result;
}
vector<string> lsSplit(string ls){
	vector<string> splitls;
	int firstChar = 0;
	for (int i = 0; i < ls.length(); i++){
		if (ls[i] == ' ' && ls[i+1] != ' '){
			index(ls, firstChar, i);
		}
	}

	return splitls;
}
int main(){
	vector<string> lsout = lsdir();
	string test = lsout[1];
	cout << index(test, 0, 10) << endl;
	//initscr();
	//for (int i = 0; i < lsout.size(); i++){
	//	addstr(lsout[i].c_str());
	//}
	//refresh();
	//getch();
	//endwin();
	return 0;
}
