#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

vector<int> random_vector(int n, int upper_bound)
{
    vector<int> vec(n);
    srand((unsigned) time(NULL));
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}

void print_vector(const vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
        if (i == vec.size() -1) {
          cout << endl;
        }
    }
}

int main(){
  int num_values = 10;
  int upper_bound = 10;
  vector<int> vector = random_vector(num_values, upper_bound);
  print_vector(vector);
}
