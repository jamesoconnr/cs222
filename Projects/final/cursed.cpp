#include <ncurses.h>
#include <menu.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <memory>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;


struct File{
	string name;

	File(string n);
};
struct Directory{
	vector<File> files;

	Directory(vector<string> ls);
	void to_string();
};

File::File(string n){
	name = n;
}
Directory::Directory(vector<string> ls){
	for (int i = 0; i < ls.size(); i++){
		files.push_back(File(ls[i]));
	}
}
void Directory::to_string(){
	for (int i = 0; i < files.size(); i++){
		cout << files[i].name << endl;
	}
}

vector<string> lsdir(string path) {
	string cmd = "ls -a1 " + path;
    array<char, 128> buffer;
    string result;
	vector<string> output;
    unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        output.push_back(buffer.data());
    }
	return output;
}
int is_regular_file(const char *path)
{
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISREG(path_stat.st_mode);
}
int main(){
	string path = ".";
	Directory currentDir(lsdir(path));
	int choice;
	int highlight = 0;

	initscr();
	noecho();
	cbreak();

	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW * menuwin = newwin(getmaxy(stdscr), getmaxx(stdscr), 0, 0);
	box(menuwin, 0, 0);
	refresh();
	wrefresh(menuwin);
	keypad(menuwin, true);
	while(1){
		for (int i = 0; i < currentDir.files.size(); i++){
			if (i==highlight){
				wattron(menuwin, A_REVERSE);
			}
			mvwprintw(menuwin, i+1, 1, currentDir.files[i].name.c_str());
			wattroff(menuwin, A_REVERSE);
		}
		choice = wgetch(menuwin);

		switch(choice){
			case KEY_UP:
				highlight--;
				if (highlight == -1)
					highlight = currentDir.files.size() -2;
				break;
			case KEY_DOWN:
				highlight++;
				if (highlight == currentDir.files.size() -1)
					highlight = 0;
				break;
			default:
				break;
		}
		if (choice == 10){
			string selection = currentDir.files[highlight].name;
			selection.erase(remove(selection.begin(), selection.end(), '\n'), selection.cend());
			string testpath = path + "/" + selection;
			if (is_regular_file(testpath.c_str()) == 0){
				path = testpath;
				currentDir = Directory(lsdir(path));
				highlight = 0;
				refresh();
				wrefresh(menuwin);
			}
			continue;
		}
	}
	
	endwin();
	return 0;
}
