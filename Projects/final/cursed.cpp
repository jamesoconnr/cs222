#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

char* strtochar(string str){
	int length = str.length();
	char* resultchar = new char[length + 1];
	strcpy(resultchar, str.c_str()); 		
}
char* lsdir(){
	string result = "";
	char buffer[128];
  	// Open pipe to file
  	FILE* pipe = popen("ls -a", "r");
  	if (!pipe) {
  	   return;
  	}

  	while (!feof(pipe)) {
  	   if (fgets(buffer, 128, pipe) != NULL)
  	      result += buffer;
  	}
  	pclose(pipe);
	char* resultchar = strtochar(result);
	return resultchar;
}

int main(){
	char* lsout = lsdir();
	cout << lsout << endl;
    return 0;
}
