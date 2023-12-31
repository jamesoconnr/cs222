#include <iostream>
using namespace std;

void wont_swap(char a, char b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap(char& a, char& b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap_with_pointers(char* a, char* b)
{
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << "  b: " << *b << endl;
}


int main(){
    char x = 'x';
    char y = 'y';
	char c = 'c';
    char d = 'd';

    cout << "x: " << x << "  y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    cout << "Calling wont_swap..." << endl;
    wont_swap(x, y);
    cout << "wont_swap x: " << x << " wont_swap  y: " << y << endl;
    cout << "Calling will_swap..." << endl;
    will_swap(x, y);
    cout << "will_swap x: " << x << " will_swap  y: " << y << endl << endl;
    
    cout << "Calling will_swap_with_pointers..." << endl;
    will_swap_with_pointers(&c, &d);
    cout << "will_swap_with_pointers c: " << c << " will_swap_with_pointers  d: " << d << endl;
	return 0;
}
