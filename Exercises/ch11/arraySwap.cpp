#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void modifier_shuffle(int &arr, int len){
    for (int i = len - 1; i > 0; --i) {
        // Generate a random index between 0 and i (inclusive)
        int j = rand() % (i + 1);

        // Swap elements arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main () {
  int arrLength = 3;
  int array[arrLength] = {1 , 2, 3};

  srand(time(NULL));
  
  return 0;
}
