#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> random_vector(int n, int upper_bound)
{
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}

vector<int> histogram(const vector<int>& vec, int upper_bound) {
    vector<int> histo(upper_bound, 0);

    for (int i = 0; i < vec.size(); i++) {
        int index = vec[i];
        if (index >= 0 && index < upper_bound) {
            histo[index]++;
        }
    }

    return histo;
}

int main() {
    int num_values = 100000;
    int upper_bound = 10;
    vector<int> vec = random_vector(num_values, upper_bound);
    vector<int> hist = histogram(vec, upper_bound);

    for (int i = 0; i < hist.size(); i++) {
        cout << "Count for value " << i << ": " << hist[i] << endl;
    }

    return 0;
}
