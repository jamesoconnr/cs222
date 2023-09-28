#include <iostream>
using namespace std;

void modify_const(const int num){
	// Cant increment num because it is a const
	num++;
}

int main(){
	modify_const(1);
}
