#include <iostream>
using namespace std;

int main(){

  int n = 5;
  int m = 7;
  cout << "The product of " << n << " and " << m << " is " << n * m << "." << endl;
  cout << "The sum of " << n << " and " << m << " is " << n + m << "." << endl;
  cout << n << " minus " << m << " is " << n - m << "." << endl;
  cout << m << " minus " << n << " is " << m - n << "." << endl;
  cout << "The (truncated) quotient of " << n << " and " << m << " is " << n / m << "." << endl;
  cout << "The (truncated) quotient of " << m << " and " << n << " is " << m / n << "." << endl;
  cout << "The (non-truncated) quotient of " << n << " and " << m << " is " << (float)n / (float)m << "." << endl;
  cout << "The (non-truncated) quotient of " << m << " and " << n << " is " << (float)m / (float)n << "." << endl;
  cout << n << " is " <<  (float)n / (float)m * 100 << " percent of " << m << "." << endl;
  cout << m << " is " <<  (float)m / (float)n * 100 << " percent of " << n << "." << endl;
}
